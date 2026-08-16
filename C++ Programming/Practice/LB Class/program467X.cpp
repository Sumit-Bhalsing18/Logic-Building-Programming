#include<iostream>

struct node
{
    public:
    int data;
    struct node* next;
    node(int iNo)
    {
       data = iNo;
       next = NULL;
    }
};
class Stack
{
    private:
    struct node* first;
    int iCount;
    
    public:
    Stack()
    {
       first = NULL;
       iCount = 0;
    }
   void Display()
   {
      struct node* temp = first;
      

      while(temp != NULL)
      {
        printf("| %d  |\n", temp->data);
        temp = temp->next;
      }
   }
   int Count()
    {
     return iCount ;
    }
    void Push(int iNo)
    {
     struct node* newn = NULL;
     newn = new node(iNo); 

    if(first == NULL)
     {
        first = newn;
     }
     else 
     {
        newn->next = first;
        first = newn;
     }
       iCount++;
    }
  
    int Pop()
    {
        if(first == NULL)
        {
            printf("Stack is empty");
            return 0;
        }
        else
        {
            struct node* temp = first;

            int iValue = first->data; 
            first = first->next;
            delete temp;
            iCount--;
            return iValue;
        }
    }
    int Peep()
    {
        int iValue = 0;
        if(first == NULL)  
        {
           printf("Stack is empty\n");
           return -1;
        }
        else
        {
          iValue = first->data;  //first cha data iValue madhe store hoil
          return iValue ;
        }
    }
  
};

int main()
{
    int iRet = 0;
    Stack sobj;
    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);
    sobj.Display();
    iRet  =sobj.Count();
    printf("Elements of the stack are: %d\n", iRet);

    iRet  = sobj.Pop();
    printf("poped element is : %d\n", iRet);
    sobj.Display();
    iRet  =sobj.Count();
    printf("Elements of the stack are: %d\n", iRet);


    iRet  =sobj.Peep();
    printf("Peep Element is: %d\n", iRet);
   
    return 0;
}