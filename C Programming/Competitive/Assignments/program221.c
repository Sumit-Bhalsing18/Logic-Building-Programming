//write recursive program which accept String from user and count white spaces
/*
Enter String :He llO Wor LD
white spaces in string are : 3
*/
#include<stdio.h>
#include<string.h>


int WhiteSpaces(char *str)
{ 
  static int iCount = 0;
  static int i = 0;

  if(str[i] != '\0') 
  {
    if(str[i] == ' ')
    {
      iCount++;
    }
    i++;
    WhiteSpaces(str);
  }
  return iCount;
}

int main()
{
  int  iRet = 0;
  char str[50];
  printf("Enter String :");
  scanf("%[^'\n']s",str);//तुला space सहित string घ्यायची असेल तर:"%[^\n]s" no space in between
  iRet =WhiteSpaces(str);//इथे str म्हणजे पूर्ण array नाही, तर function call मध्ये str चे address pass होते.
  printf("white spaces in string are : %d",iRet);
  return 0; 
}

/*
1)
WhiteSpaces(str) इथे काय होते?

तू लिहितेस:

iRet = WhiteSpaces(str);

इथे str म्हणजे पूर्ण array नाही, तर function call मध्ये str चे address pass होते.

उदा. समज:

str चा address = 1000

तर:

WhiteSpaces(str);

म्हणजे साधारण:

WhiteSpaces(1000);

आणि function मध्ये:

char *str

हा pointer 1000 address store करतो.


2)
हा सर्वात important point आहे. ⭐

str

→ address

*str

→ त्या address वरचा character



str++ नेमकं काय करतं?

समजा memory अशी आहे:

Address     Character

1000          H
1001          E
1002        space
1003          l
1004          l
1005          o

पहिल्यांदा:

str = 1000
*str = H

नंतर:

str++;

म्हणजे:

str = 1001
*str = E

पुन्हा:

str++;

म्हणजे:

str = 1002
*str = space


3)

str     → Address
*str    → Character at that address
str++   → Next character कडे जा

4)char → कोणत्या प्रकारचा data आहे हे सांगतो.

*str → str हा pointer आहे हे सांगतो.

म्हणजेच, char *str हा character चा address store करणारा pointer आहे.*/
