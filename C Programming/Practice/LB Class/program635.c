#include<stdio.h>
int main()
{
    char str[80] = {'\0'};
    char Command[4][20] = {{'\0'}};  //2d array
    int iRet = 0;
    
    printf("Marvellous CVFS : > ");
    fgets(str,sizeof(str),stdin);//kuth kiti kuthun//spaces ahet mhnun special function nahi lihil fgets lihil

    iRet =sscanf(str,"%s %s %s %s", Command[0],Command[1],Command[2],Command[3]);//tokenization kele string deu to sscanf

    printf("Number of tokens are : %d\n",iRet);

    return 0;
}
    