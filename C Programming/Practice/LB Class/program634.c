#include<stdio.h>
int main()
{
    char str[80] = {'\0'};
    char Command[5][20] = {{'\0'}};  //2d array
    int iRet = 0;
    
    printf("Marvellous CVFS : > ");
    fgets(str,sizeof(str),stdin);//kuth kiti kuthun

    iRet =sscanf(str,"%s %s %s %s", Command[0],Command[1],Command[2],Command[3]);//iret is number of tokens

    printf("Number of tokens are : %d\n",iRet);
    return 0;
}
    