#include<stdio.h>

struct node        //structure declaration    //struct madhe different datatype store astat ani he user define ahet
{
  int data;          //struct madhe kalt fhakt ki kiti size lagel memory lagech bhetat nahi 
  struct node *next; //self referential 
};
int main()
{
    struct node obj;               //struct object memory milala
    printf("%d\n" ,sizeof(obj));  // 16 liha 8 yet asel tari   //lu sangitl hot lihayla ka %d chya jagyavr
    return 0;                    // 4(int la) + 4 (padding sathi) + 8(pointer)
}

//padding memory proper arange karnyasathi kivha manage karnyasthi compiler 8 8 chya bit madhe memory milele