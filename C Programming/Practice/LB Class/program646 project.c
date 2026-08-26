//////////////////////////////////////////////////////
//
//  Header Files Inclusion
//
//////////////////////////////////////////////////////

#include<stdio.h>   //हा Header printf() scanf() fgets() Functions साठी आहे. 
#include<stdlib.h>  //हा Header malloc() free Functions साठी आहे. 
#include<unistd.h>
#include<fcntl.h>   //हा Header file function sathi ahe , open() ,O_RDONLY,O_WRONLY , O_RDWR
#include<string.h>  //हा Header String Functions साठी आहे. strcpy(), strcmp()
#include<stdbool.h> //हे Boolean वापरण्यासाठी. bool flag;

//////////////////////////////////////////////////////
//
//  User Defined Macros
//
//////////////////////////////////////////////////////

#define MAXINODE 5           //Operating System मध्ये प्रत्येक File साठी एक Inode असतो.
#define MAXFILESIZE 50       //एका File मध्ये जास्तीत जास्त 50 Bytes डेटा ठेवता येईल.
#define MAXOPENFILES 5       //jastit jast apn kiti file apn theu shakto 

#define READ 1               //हे Bitwise Permission आहेत.//READ     = 001                                                        //WRITE    = 01                                                      // EXECUTE  = 100
#define WRITE 2              //WRITE    = 010
#define EXECUTE 4            //EXECUTE  = 100

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

#define REGULARFILE 1
#define SPECIALFILE 2

//////////////////////////////////////////////////////
//
//  User Defined Macros for error handling
//
//////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1      //parameter chukiche dilyavr

#define ERR_NO_INODES -2              //inode free naslyavr

#define ERR_FILE_ALREADY_EXIST -3     //filename same zalyavr
#define ERR_FILE_NOT_EXIST -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILES_OPEN -8

//////////////////////////////////////////////////////
//
//  Structure Name :    BootBlock
//  Description :       It holds the information to
//                      boot the operating system
//
//////////////////////////////////////////////////////

struct BootBlock           //in project we not use boot block here we only print one message or hold one string
{
    char Information[100];
};

//////////////////////////////////////////////////////
//
//  Structure Name :    SuperBlock
//  Description :       It holds the information of
//                      complete File system
//
//////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;          //kiti inodes ahet 
    int FreeInodes;           //kiti inodes free ahet
};

//////////////////////////////////////////////////////
//
//  Structure Name :    Inode
//  Description :       It holds information of file
//
//////////////////////////////////////////////////////

#pragma pack(1)
struct Inode
{
    char FileName[20];          //file ch name store karto
    int InodeNumber;            //multiple node astat partek file la specific inodenumber asto 
    int FileSize;               //file chi size kiti ahe
    int ActualFileSize;         //file madhe kiti data bharla ahe (kiti character)
    int FileType;               //file cha type kuthla ahe Regular ki special 
    int ReferenceCount;         //एखाद्या INODE ला किती File Names (Links) आहेत ,kiti lok tv pahtay
    int Permission;             //user la kay karaych ahe read write ka read+write tyasathi 
    char *Buffer;               //buffer store address of heap memeory it is pointer point to heap memery and file memory of heap store actual data of file  
    struct Inode *next;         //inode pointer point to next inode 
};

typedef struct Inode INODE;   //"आजपासून struct Inode ला INODE नावाने पण ओळख manje tula pratek veles struct inode lihayla nahi lagnar 
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;

/*
Sir typedef is used to create an alias (short name).
"Sir, the functionality is exactly the same. We used typedef only to improve code readability and reduce repeated writing.
*/
//////////////////////////////////////////////////////
//
//  Structure Name :    FileTable
//  Description :       It holds information of opened
//                      files
//
//////////////////////////////////////////////////////

#pragma pack(1)
struct FileTable
{
    int ReadOffset;     //म्हणजे Reading कुठून सुरू होईल?
    int WriteOffset;    //हे Writing साठी आहे.Reading आणि Writing एकाच Position वर असतीलच असं नाही.
    int Mode;           //User ने File कशासाठी Open केली आहे.
    PINODE ptrinode;
};

typedef struct FileTable FILETABLE;
typedef struct FileTable* PFILETABLE;

/*
1)FileTable म्हणजे File नाही. हा File बद्दलची Runtime माहिती (Runtime Information) ठेवतो.
2)FILETABLE stores runtime information, such as the current read position (ReadOffset), current write position (WriteOffset), access mode (Mode), and a pointer to the corresponding INODE (ptrinode).
4)FileTable ला कसं कळणार की तो कोणत्या INODE साठी आहे? karan tith 50 inode ahet 
5)"या FileTable मध्ये त्या File च्या INODE चा Address ठेव."
6)"ptrinode stores the address of the corresponding inode. Because of this, the operating system can directly access the file metadata without searching the DILB every time. This improves efficiency."
7)read Demo.txt

Program ला काय लागेल?

Buffer कुठे आहे?
FileSize किती आहे?
Permission काय आहे?

ही माहिती कुठे आहे?

👉 INODE मध्ये.

मग FileTable ला INODE पर्यंत पोहोचायला काय लागेल?

👉 Pointer (ptrinode)
3)
UFDT

↓

FILETABLE

+--------------------+
| ReadOffset = 5     |
| WriteOffset = 12   |
| Mode = READ+WRITE  |
| ptrinode ----------+--------------------+
+--------------------+                    |
                                          ▼
                               +----------------------+
                               | INODE               |
                               | FileName            |
                               | FileSize            |
                               | ActualFileSize      |
                               | Buffer ------------+
                               +----------------------+ 

*/
//////////////////////////////////////////////////////
//
//  Structure Name :    UAREA
//  Description :       It holds information of process
//
//////////////////////////////////////////////////////

struct UAREA                         //"It is a structure definition. It is only a blueprint. No memory is allocated."
{
    char ProcessName[20];             /*हा Virtual File System कोणत्या Process साठी चालू आहे हे दाखवण्यासाठी.

                                           या Project मध्ये Programmer ने Example म्हणून Myexe ठेवले आहे.*/
    PFILETABLE UFDT[MAXOPENFILES];   //UFDT ✅ FILETABLE Pointers चा Array../*PFILETABLE आधी का लिहिल कारण UFDT मध्ये FILETABLE Structure नाही, तर FILETABLE चा Pointer ठेवायचा आहे. */
};

/*
1)PFILETABLE = struct FileTable *

⚠️ म्हणजे Pointer to FILETABLE.
2)UFDT म्हणजे काय? -> हा FILETABLE च्या Pointers चा Array आहे.
3)UFDT[0] मध्ये FILETABLE नाही.
  UFDT[0] मध्ये 5000 (Address) आहे filetable cha .
4)"Sir, UFDT stores pointers to FILETABLE objects, not the objects themselves. A FILETABLE is created only when a file is opened.
 If we declared an array of FILETABLE objects directly, memory would be allocated for all of them even if no file was open. Using pointers saves memory 
 because FILETABLE objects are allocated dynamically only when needed."
 5)UFDT

Index

0 -----> FILETABLE1 -----> INODE(Demo.txt)

1 -----> FILETABLE2 -----> INODE(Notes.txt)

2 -----> FILETABLE3 -----> INODE(Test.txt)

3 -----> NULL

4 -----> NULL
5)UFDT = Multiple Open Files Handle करतो.
 FILETABLE = एका Open File ची Runtime Information ठेवतो.
4)User File Open करतो
open Demo.txt

Program काय करेल?

नवीन FILETABLE तयार करेल.
Heap

+----------------------+
| FILETABLE            |
| ReadOffset = 0       |
| WriteOffset = 0      |
| Mode = READ          |
| ptrinode ----------> INODE1
+----------------------+

समजा या FILETABLE चा Address 5000 आहे.

आता

UFDT

0 -----> 5000

1 -----> NULL

2 -----> NULL

3 -----> NULL

4 -----> NULL

UFDT[0] मध्ये FILETABLE नाही.

UFDT[0] मध्ये 5000 (Address) आहे.


FILETABLE म्हणजे Guest ची माहिती.
*/

//////////////////////////////////////////////////////
//
//  Global variables used in the project
//
//////////////////////////////////////////////////////

struct BootBlock bootobj;     //bootobj हा BootBlock Structure चा Object आहे.
struct SuperBlock superobj;
struct UAREA uareaobj;

PINODE head = NULL;
/*
1)हे main() च्या आत नाही.
हे Global Variables आहेत.
म्हणजे Program सुरू होताच हे तयार होतात.
2)Program सुरू झाल्यावर BootBlock ची माहिती ठेवण्यासाठी एक Global Object तयार केला आहे
4) "We declare head as a global pointer because it points to the first inode of the DILB.
 Many functions like CreateFile(), OpenFile(), ReadFile(), and WriteFile() need to access the DILB. 
 If head were local, we would have to pass it to every function. So, we declare it as a global pointer."
 and all functions can access the same data."


3)Program Start
      │
      ▼
Global Variables तयार होतात
      │
      ▼
main() सुरू होतो

⚠️ म्हणजे main() सुरू होण्यापूर्वीच Memory मध्ये हे तयार झालेले असतात
*/

//////////////////////////////////////////////////////
//
//  Function Name :     InitialiseUAREA
//  Description :       It is used to initialise UAREA
//  Author :            Piyush Manohar Khairnar
//  Date :              31/07/2026
//
//////////////////////////////////////////////////////

void InitialiseUAREA()
{
    int i = 0;

    strcpy(uareaobj.ProcessName, "Myexe");
    
    for(i = 0; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("Marvellous CVFS : UAREA gets initalised succesfully\n");
}

/*
Program Start

        │
        ▼

Compiler reads

struct UAREA
{
   ...
}

        │

Memory Allocate?

❌ NO

(Only Structure Design)

──────────────────────────────────────

        │
        ▼

struct UAREA uareaobj;

        │

Memory Allocate?

✅ YES

+----------------------+
| ProcessName          |
| UFDT[0]              |
| UFDT[1]              |
| UFDT[2]              |
+----------------------+

But Values = Garbage

──────────────────────────────────────

        │
        ▼

InitialiseUAREA();

        │
        ▼

strcpy()

ProcessName = "Myexe"

        │
        ▼

Loop

UFDT[] = NULL

──────────────────────────────────────

Final Memory

+--------------------------------+
| ProcessName = Myexe            |
| UFDT[0] = NULL                 |
| UFDT[1] = NULL                 |
| UFDT[2] = NULL                 |
| UFDT[3] = NULL                 |
| UFDT[4] = NULL                 |
+--------------------------------+
*/
//////////////////////////////////////////////////////
//
//  Function Name :     InitialiseSuperBlock()
//  Description :       It is used to initialise super block
//  Author :            Piyush Manohar Khairnar
//  Date :              31/07/2026
//
//////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    printf("Marvellous CVFS : Super Block gets initalised succesfully\n");
}

/*
Step 1 : Structure Definition
struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};
काय झालं?

❌ Memory Allocate नाही झाली.

फक्त Compiler ला सांगितलं:

"SuperBlock मध्ये दोन Members आहेत."

Step 2 : Object Creation
struct SuperBlock superobj;
आता काय झालं?

✅ Memory Allocate झाली.

Memory अशी दिसते.

superobj

+----------------------+
| TotalInodes = ?????  |
| FreeInodes  = ?????  |
+----------------------+

⚠️ अजून Values नाहीत.

Step 3 : Initialization Function
void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;
}

आता Programmer काय करतो?

तो म्हणतो:

"मी superobj साठी Memory आधी Allocate केली आहे. आता त्या Memory मधील Members ला Initial Values देतो."

"First, we create the superobj object, so memory is allocated for the SuperBlock.
 Then, in InitialiseSuperBlock(), we assign initial values to its members. 
 We use the superobj object because it is the memory that we want to initialize."
*/
//////////////////////////////////////////////////////
//
//  Function Name :     CreateDILB()
//  Description :       It is used to create linked list of inodes
//  Author :            Piyush Manohar Khairnar
//  Date :              31/07/2026
//
//////////////////////////////////////////////////////

void CreateDILB()              //node create karayche ahet 
{
    PINODE temp = NULL;        //head la firavl tar aplyala first inode cha address rahnar nahi mhnun temp ha pointer ghetla traversal sathi 
    PINODE newn = NULL;        //newn ha navin node asel 

    int i = 0;

    temp = head;            //head chi value temp la dili manje head chi xerox ahe temp 

    for(i = 1; i <= MAXINODE; i++)              //hya loop mule jitke MAXINODE ahet titke inode pahilech banaun thrvle ahe  ahet
    {
        newn = (PINODE)malloc(sizeof(INODE));  //manje newn la struct Inode = INODE etki memory bhetli
                                              //Heap Memory मध्ये Memory Allocate होते.
                                               //ha navin node ahe tar tyala memory lagel mhnun malloc use kel
        strcpy(newn->FileName,"\0");     // सुरुवातीला कोणतीही File नाही म्हणून FileName Empty ठेवतो.
        newn->InodeNumber = i;           // प्रत्येक INODE ला Unique Number देतो. 
        newn->FileSize = 0;
        newn->ActualFileSize = 0;         //file nahiye mhnun sagle 0 initialise kele ahet
        newn->FileType = 0;
        newn->ReferenceCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;            //अजून Heap Memory Allocate केलेली नाही म्हणून Buffer NULL आहे.

        if(temp == NULL)       //manje linkedlist madhe konich nahi manje if condition madhe jau apn 
        {
            head = newn;       //head pahilya node cha address thevto mhnun head madhe newn dila karan newnch first inode ahe attala tari 
            temp = head;       //temp xerox ahe head chi mhnun head chi value temp madhe ghetli temp ani head donhi pn newn la point karat ahet 
        }
        else                   //else madhe alo manje linked list madhe nodes ahet
        {
            temp->next = newn; 
            temp = temp->next;
        }
        /*else
        1)//manje atta dusra inode insert karaycha ahe
        2)temp ha pahilya inode la point karat ahe aplyala first inode chya nantar dusra inode insert karaycha ahe mhnun temp->next = newn;
        3)atta temp ha last chya node la point karto mhnun temp = temp->next kel manje temp madhe atta navin inode cha address yeil 
        4)// CreateDILB() Function Program सुरू होताच सर्व Empty INODE तयार करतो.
            // नंतर CreateFile() Function फक्त त्या Empty INODE पैकी एक वापरतो.
           // प्रत्येक वेळी नवीन INODE तयार केला जात नाही.
        */
    }

    printf("Marvellous CVFS : DILB gets created succesfully\n");
}
/*
Program सुरू होताच सर्व Empty INODE आधीच तयार करून ठेवले जातात. 
त्यामुळे CreateFile() वेळी नवीन INODE तयार करावा लागत नाही.
*/
//////////////////////////////////////////////////////
//
//  Function Name :     StartAuxillaryDataInitialisation()
//  Description :       It is used to call all such functions
//                      which are used to initialise auxillary data
//  Author :            Piyush Manohar Khairnar
//  Date :              31/07/2026
//
//////////////////////////////////////////////////////

void StartAuxillaryDataInitialisation()    //, हा Function CVFS Project चा Starting Point आहे.
{                                          // Initialize all required data before using the file system.
    strcpy(bootobj.Information,"Booting process of Marvellous CVFS is completed");

    printf("%s\n",bootobj.Information);
    
    InitialiseUAREA();
    
    InitialiseSuperBlock();

    CreateDILB();
}
/*
1)StartAuxillaryDataInitialisation();
Why?

Because all initialization code is kept in one place.
Simple English:
"This function initializes all the required data before the CVFS starts working."
2)Initialization Function Memory Allocate करते. पण प्रत्यक्षात Memory आधी तयार झालेली असते;
 Initialization Functions फक्त Values भरतात.
CreateDILB() हा अपवाद आहे कारण तो malloc() वापरून नवीन INODE Objects Heap मध्ये तयार करतो.
*/
//////////////////////////////////////////////////////
//
//  Function Name :     DisplayHelp()
//  Description :       It is used to display help to
//                      the user of project
//  Author :            Piyush Manohar Khairnar
//  Date :              1/08/2026
//
//////////////////////////////////////////////////////

void DisplayHelp()   //Displayhelp function contain all available commands to the user.
{
    printf("-----------------------------------------------\n");
    printf("---------- Marvellous CVFS Help Page ----------\n");
    printf("-----------------------------------------------\n");

    printf("man : It is used to display the manual page\n");
    printf("clear : It is used to clear the terminal screen\n");
    printf("creat : It is used to create new regular file\n");
    printf("open : It is used to open regular file\n");
    printf("close : It is used to close regular file\n");
    printf("write : It is used to write the data into the file\n");
    printf("read : It is used to read the data from file\n");
    printf("stat : It is used to display statistical information of file\n");
    printf("unlink : It is used to delete the file\n");
    printf("exit : It is used to terminate Marvellous CVFS\n");

    printf("-----------------------------------------------\n");
}

/*
1)Why is this function used?

समजा User ला Command माहित नाही.

तो

help

किंवा

man

Command देईल.

Program

User
  │
  ▼
help
  │
  ▼
DisplayHelp()
  │
  ▼
All Commands are Displayed
Screen Output
---------------------------------------
Marvellous CVFS Help Page
---------------------------------------

create
open
close
read
write
unlink
exit
...

यामुळे User ला प्रत्येक Command लक्षात ठेवावी लागत नाही.

Why not write all printf() in main()?

Interviewer हा Question विचारू शकतो.

Answer

"To improve code readability and modularity. Instead of writing many printf() statements in main(), we put them in a separate function."

Simple English:

"This function keeps the code clean and easy to understand."

2)"DisplayHelp() is a utility function. It does not create files or modify data.
 It only displays information to the user."
 
*/
//////////////////////////////////////////////////////
//
//  Function Name :     ManPageDisplay()
//  Description :       It is used to display man page 
//                      of specific command
//  Input :             Name of command
//  Author :            Piyush Manohar Khairnar
//  Date :              1/08/2026
//
//////////////////////////////////////////////////////

void ManPageDisplay(char Name[])    //हा Function User ने दिलेल्या Command ची माहिती दाखवतो.
{                                   //This function displays the manual page of a command.
    if(strcmp(Name,"exit") == 0)
    {
        printf("About : It is used to terminate the project\n");
        printf("Usage : exit\n");
    }
    else if(strcmp(Name,"ls") == 0)
    {
        printf("About : It is used to list all files from current diretory\n");
        printf("Usage : ls\n");
    }
    else if(strcmp(Name,"clear") == 0)
    {
        printf("About : It is used to clear the terminal\n");
        printf("Usage : clear\n");
    }
    else
    {
        printf("No manual entry found for %s\n",Name);
    }
    /*
1)char Name[] का घेतलं? Question ❓
    Program ला कसं कळणार User ने कोणत्या Command ची माहिती मागितली?
    म्हणून
               Name = "exit"  name string cha use karun program mahiti denar command chi

2)⚠️ या Function मध्ये कोणतीही नवीन Memory Allocate होत नाही.

फक्त Name[] Parameter Stack मध्ये येतो.

3)DisplayHelp() → सर्व Commands ची List दाखवतो.
manPageDisplay() → एका Specific Command ची माहिती दाखवतो.

4)strcmp
     आता पहिली Condition
if(strcmp(Name,"exit")==0)
Why strcmp()? Question

String ला
==
ने Compare करता येतं का?

❌ नाही.

म्हणून

strcmp()

वापरतो.

strcmp() काय करतो?

तो Check करतो

Name

=

exit

का?

जर

होय

तर

strcmp()

↓

0  (return karto 0)
    */
}

//////////////////////////////////////////////////////
//
//  Function Name :     IsFileExist()
//  Description :       It is used to check whether the
//                      file is presnt or not
//  Input :             Name of file 
//  Output :            True of presnt
//                      False is not present
//  Author :            Piyush Manohar Khairnar
//  Date :              1/08/2026
//
//////////////////////////////////////////////////////

//This function checks whether a file with the given name already exists in the DILB linked list.

bool IsFileExist(                   //This function is very important for interviews because
                                    // it is used before creating, opening, deleting, or searching a file.
                  char name[]      // Name of file
                )
{
    PINODE temp = head;
    bool bFlag = false;           //Because initially we assume "File is not found."


    while(temp != NULL)          //Why this loop?  Because we have to check every inode.

    {
        if(strcmp(temp->FileName, name) == 0) //strcmp(temp->FileName, name) he etk return value 0 deto 0 == 0 condition true
        {
            bFlag = true;
            break;
        }

        temp = temp ->next;       //Move to the next inode.
    }

    return bFlag;
}

/*
1)why head ?
head points to the first inode.
We should not move head, otherwise we lose the starting address.
So we create another pointer temp.
with the help of temp we check inodes filname and input filename

2)strcmp(temp->FileName, name)
Suppose

temp->FileName = "Demo"

name = "Demo"
Then
strcmp("Demo","Demo")
returns
0
because both strings are equal.

3) strcmp("ABC","XYZ")
it returns a non-zero value.

4)Question: Why use break?
Suppose the list is

Demo
Test
Data
Notes
You are searching

Test
Without break
Demo ✔
Test ✔
Data ✔
Notes ✔
The loop still checks the remaining files unnecessarily.

With break

Demo ✔
Test ✔
Stop

This saves time.

4)Start
   |
temp = head
   |
File1
   |
Name Same?
   |
 No
   |
Next File
   |
Name Same?
   |
Yes
   |
bFlag = true
   |
break
   |
return true

If no file matches

return false
*/
//////////////////////////////////////////////////////
//
//  Function Name :     CreateFile()
//  Description :       It is used to create new file
//  Input :             Name of file & Permissions
//  Output :            File Descriptor
//  Author :            Piyush Manohar Khairnar
//  Date :              1/08/2026
//
//////////////////////////////////////////////////////

int CreateFile (                        //"This function creates a new file by using an empty inode(existind inode)."
                    char name[],        // Name of file
                    int permission      // File permission
               )
{
    int i = 0;

    PINODE temp = head;

    // Check if any free inode is available.
    if(superobj.FreeInodes == 0)
    {
        return ERR_NO_INODES;    //No free inode is available.
    }
    /*
    1)"We check FreeInodes because a new file needs one empty inode.
     If no free inode is available, we cannot store the file information."
     
2)Before CreateFile()

INODE 1
-------------------------
FileName = ""
FileType = 0
Permission = 0
Buffer = NULL
-------------------------

हे Free INODE आहेत.

User लिहितो

create Demo.txt 3

Program विचार करतो:

"मला Demo.txt ठेवण्यासाठी एक रिकामा INODE हवा."

म्हणून आधी Check करतो:

if(superobj.FreeInodes == 0)

जर Free INODE नसेल, तर

Demo.txt

कोठे Store करणार?

❌ कुठेच नाही.

मग FileName related आहे का?

✅ हो, पण फक्त FileName नाही.

Free INODE मध्ये हे सगळं Store होणार आहे.*/

    

    // If permission value is wrong
    // Permission = 1 -> READ
    // Permission = 2 -> WRITE
    // Permission = 3 -> READ + WRITE

    //Check if the permission is valid.
    if(permission < 1 || permission > 3)
    {
         // Invalid permission.
        return ERR_INVALID_PARAMETER;
    }
/*
1)permission कुठून आलं?
    Function Header बघ.)  int CreateFile(char name[], int permission)

2)User लिहितो
create Demo.txt 3

Program Parse करतो.
name = "Demo.txt"
permission = 3

3)Valid Values
1
2
3

4)"Permission INODE मध्ये Store करणारच आहोत, मग आता Check का?"
कारण Programmer ला चुकीचा Data Program मध्ये जाऊ द्यायचा नाही.
यामुळे पुढे ReadFile() आणि WriteFile() मध्ये Logic बिघडेल.
5)"We validate the user input before creating the file."

6)हा Part का लिहिला?

आता समज User ने लिहिलं

create Demo.txt 10

Program ला आधीच माहिती आहे

✔️ Free INODE आहे.

पण आता दुसरा प्रश्न.

"User ने दिलेली Permission बरोबर आहे का?"

कारण पुढे आपण

uareaobj.UFDT[i]->ptrinode->Permission = permission;

करणार आहोत.

समजा Permission

10

अशीच Store केली.

तर Memory

INODE

Permission = 10 ❌

आता पुढे ReadFile() आणि WriteFile() मध्ये Program Check करेल.

Permission == 1 ?

Permission == 2 ?

Permission == 3 ?

पण

Permission = 10

मग Program Logic बिघडेल.

म्हणून हा Check पुढे कोणाशी Related आहे?

👉 INODE च्या Permission Member शी.

कारण पुढे आपण हे करणार आहोत.

ptrinode->Permission = permission;

म्हणून आधी Verify.

नंतर Store.

7)IsFileExist(name)

ला जाईल का?

❌ नाही.

का?

कारण

return ERR_INVALID_PARAMETER;

Function तिथेच संपेल.
*/

    if(IsFileExist(name) == true)              //varchya function kadun true ale manje already file exist ahe true == true condition true hoil
    {
        return ERR_FILE_ALREADY_EXIST;         //file aleady exist aslya mule ha error yeil ani varchya function madhe break aslyamule program stop hoil 
    }

    /*
    
    समजा

आधीच

Demo.txt

असलेली File आहे.

आणि User पुन्हा लिहितो

create Demo.txt 3

Question

Program नवीन File तयार करू शकतो का?

❌ नाही.

कारण

Same Name च्या दोन Files ठेवायच्या नाहीत.

म्हणून

IsFileExist(name) function Call केलं.
  te function saglya node chya filename sobath compare hoil 
while cha use karun ani jar kuthli file ch name user ne dilelya filename chya equal asel 
tar return karel true

*/
    //आता आपण CreateFile() चा Main Logic सुरू करतो.
   // Search for the first free inode.
    while(temp != NULL)              // Traverse the linked list.
    {
        if(temp->FileType == 0)      // Check if the inode is free.
        {
            break;                    // Free inode found.
        }

        temp = temp -> next;           // Move to the next inode.
    } 
/*
1)Q. Why is IsFileExist() called before  searching for an empty inode?
"If the file already exists, there is no need to search for an empty inode. 
This avoids unnecessary traversal and saves time."

2)Step 1

temp
 │
 ▼
INODE1
FileType = 1

↓

Not Empty

↓

Move Next     temp = temp -> next;

Step 2

temp
 │
 ▼
INODE2
FileType = 1

↓

Not Empty

↓

Move Next      temp = temp -> next;

Step 3

temp
 │
 ▼
INODE3
FileType = 0

↓

Free Inode Found

↓

break

4)FileType == 0 का Check केलं?

कारण

CreateDILB() मध्ये

newn->FileType = 0;

केलं होतं.

याचा अर्थ

FileType = 0

↓

Empty INODE

आणि

CreateFile() मध्ये पुढे

ptrinode->FileType = REGULARFILE;

होईल.

म्हणजे

FileType = 1

↓

This INODE is occupied.

त्यामुळे हा Part कोणाशी Related आहे?

👉 CreateDILB() शी.

कारण

CreateDILB()

FileType = 0

↓

CreateFile()

Search FileType = 0

↓

File मिळाला

↓

FileType = 1
*/  

    // Rare case
    if(temp == NULL)
    {
        return ERR_NO_INODES;
    }

    /*
    1). Why do we check temp == NULL even after checking FreeInodes?
"It is a safety check. FreeInodes is only a counter, but temp confirms whether 
a free inode was actually found in the linked list. This avoids errors in rare cases."

2)समजा

TotalInodes = 5
FreeInodes = 2

म्हणजे Program ला वाटतं

"2 Free INODE आहेत."

पण समजा Bug मुळे किंवा Programmer ने चुकून

FreeInodes = 2

ठेवला.

आणि DILB मध्ये प्रत्यक्षात

INODE1 Used
INODE2 Used
INODE3 Used
INODE4 Used
INODE5 Used

एकही Free INODE नाही.

मग काय होईल?

FreeInodes म्हणतो

"Free आहे."

पण DILB म्हणतो

"Free नाही."

म्हणून Programmer कोणावर विश्वास ठेवतो?

फक्त Counter वर नाही.

तो प्रत्यक्ष Search पण करतो.

आणि शेवटी

if(temp == NULL)

Check करतो. tevha tyala kalt ki linked list madhe jaga nahiye 
*/


    // Search empty UFDT entry
    // Reserve first 3 FD's
    
    /*
    आतापर्यंत आपण काय केलं?

✔️ Free Inode आहे का ते Check केलं.

✔️ Permission Check केली.

✔️ File आधीपासून आहे का ते Check केलं.(file already exist)

✔️ Empty Inode शोधला.

"INODE मिळाला, पण User ही File कशी वापरणार?"

याचं उत्तर आहे...

👉 UFDT Entry लागेल.
*/

for(i = 3; i < MAXINODE; i++)
    {
        if(uareaobj.UFDT[i] == NULL)        //manje i = 3 ahe pahile 3 reserved ahet karan ufdt[3] he null ahe
        {
            break;
        }
    }
/*
1)आता User म्हणतो
create Demo.txt 3

Program म्हणतो...

"मी File तयार करतो, पण UFDT मध्ये Entry कुठे ठेवू?"
म्हणून हा Loop.

पहिली Iteration
i = 3;

का 3?

कारण Programmer ने

0,1,2 Reserved ठेवले आहेत.

2)Aim of this Loop

हा Loop Empty UFDT Entry शोधतो.

कारण

प्रत्येक Open File साठी

एक FILETABLE लागतो.

आणि

FILETABLE चा Pointer

UFDT मध्ये Store होतो.

3)Q2. Why do we check UFDT[i] == NULL?

✅ Answer

"NULL means no file table is present in that UFDT entry. So we can use it for the new file."

4)"When we create a file, first we search for a free inode.
 Then we search for an empty UFDT entry. In that UFDT entry we create a file table. 
 The file table is connected to the inode, and finally the inode is initialized 
 with the file information. The file is created in the inode, not in the UFDT."


5)CreateFile()

        │

        ▼

Empty Inode Found        mla node tr bhetla file create karayla pn atta ufdt madhe
                               Entry bhetli pahije na entry bhetel fpdt madhe tevhach tr filetable banel na 

        │

        ▼

Search Empty UFDT Entry

        │

        ▼

UFDT[3] Empty ?

        │

YES

        │

        ▼

Create FILETABLE Here

5)
"Yes Sir. Before creating the file completely,
 we also check whether there is an empty UFDT entry.
  Because a FILETABLE must be created for the new file, 
  and the pointer to that FILETABLE is stored in the UFDT."

6)create Demo.txt 3
        │
        ▼
1. Free INODE शोधा ✅
        │
        ▼
2. Empty UFDT Entry शोधा ✅
        │
        ▼
3. FILETABLE तयार करा
        │
        ▼
4. FILETABLE ला INODE शी Connect करा
        │
        ▼
5. File Created
*/
    if(i == MAXOPENFILES)
    {
        return ERR_MAX_FILES_OPEN;
    }

    // Allocate memory for file table

    uareaobj.UFDT[i] = (PFILETABLE)malloc(sizeof(FILETABLE));

    // Initialise File table
    uareaobj.UFDT[i]->ReadOffset = 0;
    uareaobj.UFDT[i]->WriteOffset = 0;
    uareaobj.UFDT[i]->Mode = permission;
    
    // Connect File table with Inode
    uareaobj.UFDT[i]->ptrinode = temp;

    // Initialise all members of inode
    strcpy(uareaobj.UFDT[i]->ptrinode->FileName,name);

    uareaobj.UFDT[i]->ptrinode->FileSize = MAXFILESIZE;

    uareaobj.UFDT[i]->ptrinode->ActualFileSize = 0;

    uareaobj.UFDT[i]->ptrinode->FileType = REGULARFILE;

    uareaobj.UFDT[i]->ptrinode->ReferenceCount = 1;

    uareaobj.UFDT[i]->ptrinode->Permission = permission;

    // Allocate memory for files data (Data Block)

    uareaobj.UFDT[i]->ptrinode->Buffer = (char *)malloc(MAXFILESIZE);

    superobj.FreeInodes--;
    
    return i;
}

/*
1)CreateDILB()

✅ Empty INODE तयार करतो.

CreateFile()   -> jevha user create "Demo.txt" 3 lihito he kuthla inode null ahe tya inode madhe file chi information jate 

✅ त्या Empty INODE ला खरी File बनवतो.
*/
//////////////////////////////////////////////////////
//
//  Function Name :     LsFile()
//  Description :       It is used to display names of 
//                      all files
//  Input :             None
//  Output :            None
//  Author :            Piyush Manohar Khairnar
//  Date :              1/08/2026
//
//////////////////////////////////////////////////////

void LsFile()
{
    PINODE temp = head;

    printf("-----------------------------------------------\n");
    printf("------ Marvellous CVFS Files Information ------\n");
    printf("-----------------------------------------------\n");

    while(temp != NULL)
    {
        if(temp->FileType != 0)
        {
            printf("%s\n",temp->FileName);
        }

        temp = temp->next;
    }
}

//////////////////////////////////////////////////////
//
//  Entry Point function of the CVFS project
//
//////////////////////////////////////////////////////

int main()
{
    char str[80] = {'\0'};
    char Command[5][20] = {{'\0'}};

    int iCount = 0, iRet = 0;
    
    StartAuxillaryDataInitialisation();

    printf("-----------------------------------------------\n");
    printf("----- Marvellous CVFS started succesfully -----\n");
    printf("-----------------------------------------------\n");

    // Infinite Listening Shell
    while(1)
    {
        fflush(stdin);
        
        strcpy(str,"");

        printf("\nMarvellous CVFS : > ");
        fgets(str,sizeof(str),stdin);

        iCount = sscanf(str,"%s %s %s %s %s",Command[0],Command[1],Command[2],Command[3],Command[4]);

        fflush(stdin);
        
        if(iCount == 1)
        {
            // Marvellous CVFS : > exit
            if(strcmp(Command[0],"exit") == 0)
            {
                printf("Thank you for using Marvellous CVFS\n");
                printf("Deallocating all resources of Marvellous CVFS\n");

                break;
            }
            // Marvellous CVFS : > help
            else if(strcmp(Command[0],"help") == 0)
            {
                DisplayHelp();
            }
            // Marvellous CVFS : > clear            
            else if(strcmp(Command[0],"clear") == 0)
            {
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif
            }
            // Marvellous CVFS : > ls            
            else if(strcmp(Command[0],"ls") == 0)
            {
                LsFile();
            }
            else
            {
                printf("Command not found\n");
                printf("Please refer help option to get more information\n");
                printf("Please refer manual page of command using man\n");
            }
        }
        else if(iCount == 2)
        {
            // Marvellous CVFS : > man open
            if(strcmp(Command[0],"man") == 0)
            {
                ManPageDisplay(Command[1]);
            }
            else
            {
                printf("Command not found\n");
                printf("Please refer help option to get more information\n");
                printf("Please refer manual page of command using man\n");
            }
        }
        else if(iCount == 3)
        {
            // Marvellous CVFS : > creat Ganesh.txt 3
            if(strcmp(Command[0], "creat") == 0)
            {
                iRet = CreateFile(Command[1], atoi(Command[2]));
            
                if(iRet == ERR_NO_INODES)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because there is no free inode\n");
                }
                else if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because parameters of command are invalid\n");
                    printf("Please use man page to get actual parameters\n");
                }
                else if(iRet == ERR_FILE_ALREADY_EXIST)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because the file name is already present\n");
                    printf("Please use ls command to check names of all files\n");
                }
                else if(iRet == ERR_MAX_FILES_OPEN)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because the UFDT is full\n");
                    printf("Please close some opened file\n");
                }
                else
                {
                    printf("File succesfully created with FD : %d\n",iRet);
                }
            }
        }
        else if(iCount == 4)
        {
            
        }
        else
        {
            printf("Command not found\n");
            printf("Please refer help option to get more information\n");
            printf("Please refer manual page of command using man\n");
        }
    } // End of while

    return 0;
} // End of main

/*
           Global Area

head
 │
 ▼
NULL


           Stack

temp
 │
 ▼
NULL

newn
 │
 ▼
NULL

i = 0


           Heap

(काहीच नाही)*/

/*
                  CreateDILB()

         +--------------------------+
         | FileName = ""            |
         | FileSize = 0             |
         | ActualFileSize = 0       |
         +--------------------------+

                     │
         User : create Demo.txt
                     │
                     ▼

                 CreateFile()

         +--------------------------+
         | FileName = Demo.txt      |
         | FileSize = 50            |
         | ActualFileSize = 0       |
         +--------------------------+
         */

/*
    नवीन Node तयार झाला.

newn

↓

INODE2

आता temp कुठे आहे?

temp

↓

INODE1

म्हणजे Last Node वरच आहे.

त्यामुळे Traversal करायची गरजच नाही.

temp ला Programmer मुद्दाम Last Node वर ठेवतो.

म्हणून प्रत्येक वेळी Traversal वाचते.

1)if फक्त पहिल्या Iteration ला चालतो.
2)else मध्ये Insert Last करतो.
3)temp नेहमी Last Node वर असतो.
4)Traversal लागत नाही.
*/

/*
हे INODE आधीच का तयार केले?

का नाही User File तयार करेल तेव्हा तयार केले?

उत्तर:

कारण हा Project Operating System सारखा वागतो.

Operating System Boot झाला की तो आधी Resources तयार ठेवतो.

उदाहरण:

Windows सुरू झाल्यावर RAM, Process Table, File Table तयार असतात.

नंतर आपण Chrome उघडतो.*/

/*

Step 0 : Program सुरू झाला

Program सुरू होताच Global Objects तयार होतात.

struct BootBlock bootobj;
struct SuperBlock superobj;
struct UAREA uareaobj;
PINODE head = NULL;
Memory
Global Memory

+------------------------+
| bootobj                |
+------------------------+

+------------------------+
| superobj               |
| TotalInodes = ????     |
| FreeInodes  = ????     |
+------------------------+

+------------------------+
| uareaobj               |
| ProcessName = ?????    |
| UFDT[] = ?????         |
+------------------------+

head
 │
 ▼
NULL

⚠️ Memory Allocate झाली आहे. पण Values अजून नाहीत.

मग main() सुरू होतो.

समजा main() मध्ये

int main()
{
    StartAuxillaryDataInitialisation();
}

हे Call आहे.

Program

main()
   │
   ▼
StartAuxillaryDataInitialisation()

मध्ये जातो.

आता हा Function
void StartAuxillaryDataInitialisation()

याचा अर्थ काय?

Simple English Comment
// Initialize all required data before using the file system.
Line 1
strcpy(bootobj.Information,
"Booting process of Marvellous CVFS is completed");
काय होतं?

Program bootobj च्या Memory मध्ये Message Store करतो.

Before

bootobj

Information

??????

After

bootobj

Information

Booting process of Marvellous CVFS is completed
Why?

हा फक्त Boot Message आहे.

User ला सांगण्यासाठी.

Line 2
printf("%s",bootobj.Information);

Screen वर

Booting process of Marvellous CVFS is completed

Print होईल.

आता Important Part
InitialiseUAREA();
Program कुठे जाईल?
StartAuxillaryDataInitialisation()

        │
        ▼

InitialiseUAREA()
काय होतं?
uareaobj

Before

ProcessName = ????

UFDT[0] = ????

UFDT[1] = ????

⬇️

After

ProcessName = Myexe

UFDT[0] = NULL

UFDT[1] = NULL

UFDT[2] = NULL

Program परत कुठे येईल?

StartAuxillaryDataInitialisation()

याच Function मध्ये.

मग
InitialiseSuperBlock();

Program पुन्हा Jump करतो.

StartAuxillaryDataInitialisation()

        │
        ▼

InitialiseSuperBlock()

Before

superobj

TotalInodes = ????

FreeInodes = ????

After

superobj

TotalInodes = 50

FreeInodes = 50

Function संपला.

Program परत

StartAuxillaryDataInitialisation()

मध्ये.

मग
CreateDILB();

Program पुन्हा Jump करतो.

Before

head

↓

NULL

After

head

↓

INODE1

↓

INODE2

↓

INODE3
...

Function Complete.

Program परत

StartAuxillaryDataInitialisation()

मध्ये येतो.

Function संपतो.

Program परत

main()

मध्ये येतो.

Complete Execution Flow
Program Starts
      │
      ▼
Global Objects Created
      │
      ▼
main()
      │
      ▼
StartAuxillaryDataInitialisation()
      │
      ├──────────────► strcpy()
      │                  │
      │                  ▼
      │            bootobj Initialized
      │
      ├──────────────► InitialiseUAREA()
      │                  │
      │                  ▼
      │           UAREA Initialized
      │
      ├──────────────► InitialiseSuperBlock()
      │                  │
      │                  ▼
      │         SuperBlock Initialized
      │
      ├──────────────► CreateDILB()
      │                  │
      │                  ▼
      │         50 Empty INODEs Created
      │
      ▼
Return to main()

*/