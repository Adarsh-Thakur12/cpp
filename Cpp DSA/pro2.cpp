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
 struct node *start=NULL;
 void linkedListTraversal(struct node *ptr);
  struct node *createll(struct node *);
  struct node *insertfirst(struct node *head);
  struct node *insertlast(struct node *head);
  struct node *insertafter(struct node *head,int num);
  struct node *insertbefore(struct node *head,int num);
  struct node *delfirst(struct node *head);
  struct node *dellast(struct node *head);
  struct node *delspecific(struct node *head,int num);
 //creating a linked list
 struct node *createll(struct node *)
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
         else{
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
//insertion of a node at the beginning 
struct node *insertfirst(struct node *head)
{
    struct node newnode=(struct node)malloc(sizeof(struct node));
    int val;
    cin >> val;
    newnode->data=val;
    newnode->next=head;
    head=newnode;
    return head;
}
//insertion at the last
struct node *insertlast(struct node *head)
{
    struct node *ptr;
    struct node newnode=(struct node)malloc(sizeof(struct node));
    int val;
    cin >> val;
    newnode->data=val;
    ptr=head;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
    }
    ptr=newnode;
    newnode->next=NULL;
    return head;
}
//insertion after a particular value
struct node *insertafter(struct node *head,int num)
{
    struct node *ptr;
    struct node newnode=(struct node)malloc(sizeof(struct node));
    int val;
    cout << "enter value to be inserted \n";
    cin >> val;
    newnode->data=val;
    ptr=head;
    while(ptr->next!=NULL)
    {
        if(ptr->data==num)
        {
            newnode->next=ptr->next;
            ptr->next=newnode;
            break;
        }
        ptr=ptr->next;
    }
    return head;
}
//insertion before a particular value
struct node *insertbefore(struct node*head,int num)
{
    struct node *ptr,*preptr;
    struct node newnode=(struct node)malloc(sizeof(struct node));
    int val;
    cout << "enter value to be inserted \n";
    cin >> val;
    newnode->data=val;
    ptr=head;
    if(ptr->data!=num)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=newnode;
    newnode->next=ptr;
    return head;
}
//deletion fron the beginning
struct node *delfirst(struct node*head)
{
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
//deletion from the end
struct node *dellast(struct node*head)
{
    struct node *ptr,*preptr;
    ptr=head;
    preptr=head;
    while(ptr->next!=NULL)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    return head;
}
//deletion from a particular position
struct node *delspecific(struct node*head,int num)
{
    struct node *ptr,*preptr;
    ptr=head;
    preptr=ptr;
    while(preptr->data!=num)
    {
        ptr=ptr->next;
        preptr=ptr;
    }
    preptr->next=ptr->next;
    free (ptr);
    return head;
}
int main()
{
    cout << "creating linked list\n";
    start=createll(start);    //creating
    linkedListTraversal(start);
    cout << "\n";
    
    cout << "insertion at the beginning\n";
    start=insertfirst(start);     //insertion at the beginning
    linkedListTraversal(start);
    cout << "\n";
    
    cout << "insertion at the end\n";
    start=insertlast(start);     //insertion at the last
    linkedListTraversal(start);
    cout << "\n";
    
    cout << "insertion after a particular value\n";
    cout << "insertion after which value?\n";
    int num1;
    cin >> num1;
    start=insertafter(start,num1);    //insertion after a particular value
    linkedListTraversal(start); 
    cout << "\n";
    
    cout << "insertion before a particular value\n";
    cout << "insertion before which value?\n";
    int num2;
    cin >> num2;
    start=insertbefore(start,num2);    //insertion before a particular value
    linkedListTraversal(start);
    cout << "\n";
    
    cout << "deletion from the beginning\n";
    start=delfirst(start);       //deletion from the beginning
    linkedListTraversal(start);
    cout << "\n";
    
    cout << "deletion from the end\n";
    start=dellast(start);       //deletion from the end
    linkedListTraversal(start);
    cout << "\n";
    
    cout << "deletion from a particular position\n";
    cout << "enter value after which deletion has to be done\n";
    int num3;
    cin >> num3;
    start=delspecific(start,num3);    //deletion from a particular index
    linkedListTraversal(start);
    cout << "\n";
return 0;
}