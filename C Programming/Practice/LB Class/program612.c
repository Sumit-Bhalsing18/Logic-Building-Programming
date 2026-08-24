//PROJECT STARTED 
//////////////////////////////////////////////////////////////////
//
//   Header Files Inclusion
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////
//
//   User Define Macros
//
//////////////////////////////////////////////////////////////////
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
//   User Define Macros for error handling
//
//////////////////////////////////////////////////////////////////
#define ERR_INVALID_PARAMETER -1
#define  ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4

#define ERR_PERMISSION_DENIED -5 

#define ERR_INSUFFICENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILES_OPEN -8

//////////////////////////////////////////////////////////////////
//
//   Structure Name : Boot Block          //use honar nahiye fakt lihilay toh inactive ahe
//   Description :    It holds the information to boot the operating system
//
//////////////////////////////////////////////////////////////////

struct BootBlock
{
     char Information[100];
};



//////////////////////////////////////////////////////////////////
//
//   Structure Name : SuperBlock
//   Description :    It holds the information 
//                    of complete file system
//////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes ;
};

//////////////////////////////////////////////////////////////////
//
//   Structure Name : Inode 
//   Description :   It holds the information of file 
//
//////////////////////////////////////////////////////////////////

#pragma pack(1)
struct Inode
{
  char FileName[20]; //directory nahiye mhnun filenmae ani inode tya madhe thevl karan Inode madhe te 2 gosti nastat nast 
  int InodeNumber ;
  int FileSize;
  int ActualFileSize;
  int FileType;
  int ReferenceCount;  //tv ch example kiti process tya file la access kartay 
  int Permission;
  char *Buffer;   //data block nahiye 
  struct Inode *next;
};

typedef struct Inode INODE;              //I = indexed
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;

//////////////////////////////////////////////////////////////////
//
//   Structure Name : FileTable
//   Description :   It holds the information of opened files
//
//////////////////////////////////////////////////////////////////

#pragma pack(1)
struct FileTable
{
   int ReadOffset;  //kudhun read kartoy tyach offset
   int WriteOffset; //kuth lihito               1 ch file ahe write 7 la ani red la 10 la mhnun 2 ghetle 
   int Mode;         //kuthlya kama karta open keliye red or write
   PINODE ptrinode;  
};

typedef struct FileTable FILETABLE;
typedef struct FileTable* PFILETABLE;

//////////////////////////////////////////////////////////////////
//
//   Structure Name : UAREA
//   Description :   It holds the information of process
//
//////////////////////////////////////////////////////////////////

struct UAREA
{
   char ProcessName[20];
   PFILETABLE UFDT[MAXOPENFILES];
};

//////////////////////////////////////////////////////////////////
//
//  Global variables used in the project
//
//////////////////////////////////////////////////////////////////

struct BootBlock bootobj;  //structure object
struct SuperBlock superobj;
struct UAREA uareaobj ;

PINODE head = NULL; //pointer

//////////////////////////////////////////////////////////////////
//
//   Function Name :  InitialisedUAREA
//   Description :    It is used to initialise UAREA
//   Author   :       Sumit Dasharath Bhalsing
//   Date :           31/07/2026
//
//////////////////////////////////////////////////////////////////

void  InitialisedUAREA()
{
    int i =0 ;
    strcpy(uareaobj.ProcessName, " Myexe");

    for(i =0 ; i< MAXOPENFILES ; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }
    printf("Marvellous CVFS : UAREA gets gets inilialised successfully ");
};

//////////////////////////////////////////////////////////////////
//
//   Entry point function of cvfs project
//
//////////////////////////////////////////////////////////////////
int main()
{
    InitialisedUAREA();
    return 0;
}
