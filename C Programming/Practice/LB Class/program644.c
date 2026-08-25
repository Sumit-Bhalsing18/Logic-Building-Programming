//////////////////////////////////////////////////////////////////
//
//  Header Files Inclusion
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////
//
// User Defined Macros
//
//////////////////////////////////////////////////////////////////

#define MAXINODE 10
#define MAXFILESIZE 50
#define MAXOPENFILES 10

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

#define REGULARFILE 1
#define SPECIALFILE 2



//////////////////////////////////////////////////////////////////
//
// User Defined Macros For Error Handling
//
//////////////////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFICIENT_SPACE -6

#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILES_OPEN -8


//////////////////////////////////////////////////////////////////
//
//  Structure Name :    BootBlock
//  Description :       It holds the information to
//                      boot the operating system
//
//////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};


//////////////////////////////////////////////////////////////////
//
//  Structure Name :    SuperBlock
//  Description :       It holds the information of
//                      complete file system
//
//////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};


//////////////////////////////////////////////////////////////////
//
//  Structure Name :    Inode
//  Description :       It holds the information of files
//
//////////////////////////////////////////////////////////////////

#pragma pack(1)
struct Inode
{
    char FileName[20];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int FileType;
    int ReferenceCount;
    int Permission;
    char *Buffer;
    struct Inode *next;
};

typedef struct Inode INODE;
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;


//////////////////////////////////////////////////////////////////
//
//  Structure Name :    FileTable
//  Description :       It holds the information of opned files
//
//////////////////////////////////////////////////////////////////

#pragma pack(1)
struct FileTable
{
    int ReadOffset;
    int WriteOffset;
    int Mode;
    PINODE ptrinode;
    
};

typedef struct FileTable FILETABLE;
typedef struct FileTable* PFILETABLE;


//////////////////////////////////////////////////////////////////
//
//  Structure Name :    UAREA
//  Description :       It holds the information of process
//
//////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];
};


//////////////////////////////////////////////////////////////////
//
//  Global Varibles Used In Project
//
//////////////////////////////////////////////////////////////////

struct BootBlock bootobj;
struct SuperBlock superobj;
struct UAREA uareaobj;

PINODE head = NULL;


//////////////////////////////////////////////////////////////////
//
//  Function Name :     InitialiseUAERA
//  Description :       It is used to initilise UAREA
//  Author :            Anuraj Ramkrushna Ghawate
//  Date :              31/07/2026
//
//////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    int i = 0;
    strcpy(uareaobj.ProcessName,"Myexe");

    for(i = 0; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("Marvellous CVFS : UAREA Gets Initilised Succesfully\n");
}


//////////////////////////////////////////////////////////////////
//
//  Function Name :     InitialiseSuperBlock
//  Description :       It is used to initilise Super Block
//  Author :            Anuraj Ramkrushna Ghawate
//  Date :              31/07/2026
//
//////////////////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    printf("Marvellous CVFS : Super Block Gets Initilised Succesfully\n");
}


//////////////////////////////////////////////////////////////////
//
//  Function Name :     CreateDILB()
//  Description :       It is used to create Linked List
//                      Of Inodes
//  Author :            Anuraj Ramkrushna Ghawate
//  Date :              31/07/2026
//
//////////////////////////////////////////////////////////////////

void CreateDILB()
{
   PINODE temp = NULL;
   PINODE newn = NULL;

   int i = 0;

   temp = head;

   for(i = 1; i <= MAXINODE; i++)
   {
        newn = (PINODE)malloc(sizeof(INODE));

        newn->InodeNumber = i;
        strcpy(newn->FileName,"\0");
        newn->FileSize = 0;
        newn->ActualFileSize = 0;
        newn->FileType = 0;
        newn->ReferenceCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;
        
        if(temp == NULL)
        {
            head = newn;
            temp = head;
        }
        else
        {
            temp ->next = newn;
            temp = temp->next;
        }
   }

    printf("Marvellous CVFS : DILB Gets Created Succesfully\n");
}


//////////////////////////////////////////////////////////////////
//
//  Function Name :     StartAuxillaryDataInitialisation()
//  Description :       It is used to call all such funtions
//                      which are used to initialise Auxillary
//                      Data
//  Author :            Anuraj Ramkrushna Ghawate
//  Date :              31/07/2026
//
//////////////////////////////////////////////////////////////////

void StartAuxillaryDataInitialisation()
{
    strcpy(bootobj.Information,"Booting Of Marvellous CVFS Is Completed");
    printf("%s\n",bootobj.Information);

    InitialiseUAREA();
    InitialiseSuperBlock();
    CreateDILB();
}


//////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayHelp()
//  Description :       It is used to display help to the
//                      user of project
//  Author :            Anuraj Ramkrushna Ghawate
//  Date :              01/08/2026
//
//////////////////////////////////////////////////////////////////

void DisplayHelp()
{
    printf("------------------------------------------------------------\n");
    printf("---------Marvellous CVFS Help Page--------------------------\n");
    printf("------------------------------------------------------------\n");

    printf("man : It Is Used To Display The Manual Page\n");
    printf("clear : It Is Used To Clear The Terminal Screen\n");
    printf("creat : It Is Used To Create New Regular File\n");
    printf("open : It Is Used To Open New Regular File\n");
    printf("close : It Is Used To Close New Regular File\n");
    printf("write : It Is Used To Write Data Into File\n");
    printf("read : It Is Used To Read The Data From File\n");
    printf("stat : It Is Used To Display Statistical Information Of File\n");
    printf("unlink : It Is Used To Delete The File\n");
    printf("exit : It Is Used To Terminate Marvellous CVFS\n");
    printf("------------------------------------------------------------\n");
}


//////////////////////////////////////////////////////////////////
//
//  Function Name :     ManPageDisplay()
//  Description :       It is used to display man page of the
//                      specific command
//  Input :             Name Of Command
//  Author :            Anuraj Ramkrushna Ghawate
//  Date :              01/08/2026
//
//////////////////////////////////////////////////////////////////

void ManPageDisplay(char Name[])
{
    if(strcmp(Name,"exit")==0)
    {
        printf("About :\n");
        printf("Usage : \n");
    }
    else if(strcmp(Name,"ls")==0)
    {

    }
    else
    {
        printf("No Manual Entry Found For %s\n",Name);
    }
}
//////////////////////////////////////////////////////////////////
//
//  Entry Point Function Of The CVFS Project
//
//////////////////////////////////////////////////////////////////

int main()
{
    char str[80]={'\0'};
    char Command [5][20] = {{'\0'}};
    int iRet = 0, iCount = 0;

    StartAuxillaryDataInitialisation();

    printf("---------------------------------------------\n");
    printf("-----Marvellous CVFS Started Succesfully-----\n");
    printf("---------------------------------------------\n");
    
    //infinite listining shell

    while(1)
    {
        fflush(stdin);

        strcpy(str,"");

        printf("\n Marvellous CVFS : >");
        fgets(str,sizeof(str),stdin);

        iCount = sscanf(str,"%s %s %s %s %s",Command[0],Command[1],Command[2],Command[3],Command[4]);

        fflush(stdin);

        if(iCount == 1)
        {
            if(strcmp(Command[0],"exit")==0)
            {
                printf("Thank You For Using Marvellous CVFS\n");
                printf("Deallocating The All Resources Of Marvellous CVFS\n");
                break;
            }
            else if(strcmp(Command[0],"help")==0)
            {
                DisplayHelp();
            }
            else
            {
                printf("Command Not Found\n");
                printf("Please Refer Help Option To Get More Inforamtion\n");
                printf("Please Refer The Manual Page Of Command Using Man\n");
            }
        }
        else if(iCount == 2)
        {
            if(strcmp(Command[0],"man")==0)
            {
                ManPageDisplay(Command[1]);
            }
            else
            {
                printf("Command Not Found\n");
                printf("Please Refer Help Option To Get More Inforamtion\n");
                printf("Please Refer The Manual Page Of Command Using Man\n");
            }
        }
        else if(iCount == 3)
        {
            //Marvellous CVFS : > create Ganesh.txt 3

            if(strcmp(Command[0] ,"create"))
        }
        else if(iCount == 4)
        {
            
        }
        else
        {
            printf("Command Not Found\n");
            printf("Please Refer Help Option To Get More Inforamtion\n");
            printf("Please Refer The Manual Page Of Command Using Man\n");
        }
    } // end of while



    return 0;
} // 