/////////////////////////////////////////////////////////////////////////
//
//  Header Files Inclusion
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////
//
//  User Defined Macros
//
/////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////
//
//  User Defined Macros for err handling
//
/////////////////////////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSAFFICIENT_DATA  -7

#define ERR_MAX_FILES_OPEN -8

/////////////////////////////////////////////////////////////////////////
//
//  Structure Name :    BootBlock
//  Description :       It holds the information to
//                      boot the operating System
//
/////////////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};

/////////////////////////////////////////////////////////////////////////
//
//  Structure Name :    SuperBlock
//  Description :       It holds the information of
//                      complete File system
//
/////////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
}; 

/////////////////////////////////////////////////////////////////////////
//
//  Structure Name :    Inode
//  Description :       It holds information of file
//
/////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////
//
//  Structure Name :    FileTable
//  Description :       It holds information of opened
//                      Files
//                  
/////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////
//
//  Structure Name :    FileTable
//  Description :       It holds information of process
//                                   
/////////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];
};

/////////////////////////////////////////////////////////////////////////
//
//  Global variables used in the project
//                  
/////////////////////////////////////////////////////////////////////////

struct BootBlock bootobj;
struct SuperBlock superobj;
struct UAREA uareaobj;

PINODE head = NULL;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InitialiseUAREA
//  Description :       It is used tp initialise UAREA
//  Author :            Yash Pralhad Patil
//  Date :              31/07/2026
//
/////////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    int i = 0;

    strcpy(uareaobj.ProcessName, "Myexe");

    for (i = 0; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("Marvellous CVFS: UARE gets initalised successfully\n");
}

/////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InitialiseSuperBlock()
//  Description :       It is used tp initialise super Block
//  Author :            Yash Pralhad Patil
//  Date :              31/07/2026
//
/////////////////////////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    printf("Marvellous CVFS: Super Block gets initalised successfully\n");
}

/////////////////////////////////////////////////////////////////////////
//
//  Function Name :     CreateDILB()
//  Description :       It is used to create linked list of inodes
//  Author :            Yash Pralhad Patil
//  Date :              31/07/2026
//
/////////////////////////////////////////////////////////////////////////

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

        if (temp == NULL)
        {
            head = newn;
            temp = newn;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;
        }
    }

    printf("Marvellous CVFS: DILB gets created successfully\n");
}

/////////////////////////////////////////////////////////////////////////
//
//  Function Name :     StartAuxillaryDataInitialisation()
//  Description :       It is used to call all such functions
//                      which sre used to initialise auxillary data
//  Author :            Yash Pralhad Patil
//  Date :              31/07/2026
//
/////////////////////////////////////////////////////////////////////////

void StartAuxillaryDataInitialisation()
{
    strcpy(bootobj.Information,"Booting process of Marvellous CVFS is completed");

    printf("%s\n",bootobj.Information);
    InitialiseUAREA();
    InitialiseSuperBlock();

    CreateDILB();
}

/////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayHelp()
//  Description :       It is used to display help to
//                      the user of project
//  Author :            Yash Pralhad Patil
//  Date :              1/08/2026
//
/////////////////////////////////////////////////////////////////////////

void Display()
{
    printf("-----------------------------------------------------------\n");
    printf("--------- Mrvellous CVFS help page-------------------------\n");
    printf("-----------------------------------------------------------\n");

    printf("man : It is used to display the manual page\n");
    printf("clear : it is uesd to create new regular file \n");
    printf("write : is is used to write the data into the file \n");
    printf("open : it is used to open regular file \n");
    printf("close :it is used to close  regular file \n");
    printf("stat : it is used to display statistical ");
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point function of the CVFS project
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    char str[80] = {'\0'};
    char Command[5][20] = {{'\0'}};
    char CommandX[20] = {'\0'};
    int iCount = 0,iRet = 0;

    StartAuxillaryDataInitialisation();

    printf("-----------------------------------------------------------\n");
    printf("--------- Mrvellous CVFS started succesfullu --------------\n");
    printf("-----------------------------------------------------------\n");

    // Infinite Listening Shell
    while (1)
    {
        fflush(stdin);

        strcpy(str,"");

        printf("\nMarvellous CVFS : >");
        fgets(str,sizeof(str),stdin);

        iCount = sscanf(str,"%s %s %s %s %s",Command[0],Command[1],Command[2],Command[3],Command[4]);

        fflush(stdin);


        if (iCount == 1)
        {
            if (strcmp(Command[0],"exit") == 0)
            {
                printf("Thank you for using Marvellous CVFS\n");
                printf("Deallocating all resources of Marvellous CVFS \n");

                break;
            }
            else if (strcmp(Command[0],"help"))
            {
                DisplayHelp();
            }
            
        }
        else if (iCount == 2)
        {
            /* code */
        }
        else if (iCount == 3)
        {
            /* code */
        }
        else if (iCount == 4)
        {
            /* code */
        }
        else
        {
            printf("Command not found\n");
            printf("Please refer help option to get more informationo\n");
            printf("Please refer manual page of command using man\n");
        }
    }

    return 0;
}