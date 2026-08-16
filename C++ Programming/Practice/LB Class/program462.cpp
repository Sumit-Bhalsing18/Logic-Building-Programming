#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node* next;
};

class Stack
{
    private:
      struct node* first;   /* first हा struct node प्रकारच्या structure चा pointer आहे.
                              तो struct node चा address साठवतो.*/
      int iCount ;

    public:
        Stack();      //constructor

        void Push(int iNO);  //InsertFirst

        int Pop() ;          //DeleteFirst

        int Peep();          //fakt data anun denar DeleteFirst sarkh ahe delete kahi karanar nahi

        void Display();

        int Count();

};

Stack :: Stack()     
{

}
void Stack :: Push(int iNO)  
{

}
int Stack :: Pop()          
{
  return 0;
}
int Stack :: Peep()       
{
  return 0;
}
void Stack :: Display()
{

}
int Stack :: Count()
{
  return iCount;
}
int main()
{
    Stack sobj;  //stack chya class cha object
    return 0;
}