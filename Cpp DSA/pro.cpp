/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
  #include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
 struct node *start1=NULL;
 struct node *start2=NULL;
 void linkedListTraversal(struct node *ptr);
  struct node *createll(struct node *);
 //creating a linked list
 struct node *createll(struct node *start)
 {
     struct node *newnode,*ptr;
     int num;
     cout << "enter -1 to end \n";
     while(num!=-1)
     {
         newnode=(struct node *)malloc(sizeof(struct node));
         newnode->data=num;
         if(start==NULL)
         {
             newnode->next=NULL;
             start=newnode;
         }

   else
   {
             ptr=start;
             while(ptr->next!=NULL)
             {
                 ptr=ptr->next;
             }
             ptr->next=newnode;
             newnode->next=NULL;
         }
 cout << "enter data \n";
         cin >> num;
     }
     return start;
 }
//linked list traversal
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout <<  ptr->data << "  ";
        ptr = ptr->next;
    }
}
int main()
{
    cout << "creating linked list\n";
    start1=createll(start1);    //creating
    start2=createll(start2); 
    struct node *ptr=start1;
    while(ptr->next!=NULL)
    ptr=ptr->next;
    ptr->next=start2;
    free(start2);
    free(ptr);
    linkedListTraversal(start1);
return 0;
}