//write a program which accept one number from user and ON its first 4 bits of that number ,return modified number
/*
Enter number:
73
modified number is 79

Enter number:
2
modified number is 15        //       8 4 2 1  = 15
*/
#include<stdio.h>
typedef unsigned int UNIT;

UNIT CheckBit(UNIT iNo)
{
    UNIT iMask = (1<<0) | (1<<1) | (1<<2) | (1<<3);            
    UNIT iAns = iNo | iMask;
    return iAns;
};
int main()
{
    UNIT uValue = 0 , iRet = 0;
    printf("Enter number:\n");
    scanf("%u", &uValue);
    
    iRet = CheckBit(uValue);
    printf("modified number is %u" , iRet);
    return 0;
}

/*OVERVIEW :-

1)jar Bit check karaych asel tar :- & (AND) use kar
2)jar Bit off   karaych asel tar :- ~iMask सोबत & वापरतो (la karan iMaskch tya bit la point karat asto)
3)jar Bit ON    karaych asel tar :- |(OR) use kar
4)jat Bit Toggle karaych asel tar:- ^(XOR) use kar 
*/