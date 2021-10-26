#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *next;
};
typedef struct node node;
node *head =NULL;


void insertion(int value)
{
     node *temp;
     temp=(node*)malloc(sizeof(node));
     temp->info=value;
     temp->next=NULL;
     if(head==NULL)
     head=temp;
     else
     {
          temp->next=head;
          head=temp;
     }
}

int pop()
{
node *temp=head;
head=head->next;
temp->next=NULL;
int a=temp->info;
free(temp);
return a;
}

void display()
{
 node *temp=head;
 while(temp!=NULL)
 {
 printf("%d ",temp->info);
 temp=temp->next;
 }
} 
 

int main(void)
{ 
int choice,item;
 while(4)
 {
 printf("\n1.insertion \n");
 printf("2.deletion \n");
 printf("3.display \n");
 printf("4.exit \n");
 printf("Enter your choice : ");
 scanf("%d",&choice);
 
  switch(choice)
  {
   case 1: 
   {
   printf("\nEnter item : ");
   scanf("%d",&item);
   insertion(item);
   }
   break;
   
   case 2:
   {
   item=pop();
   printf("\nDeleted element is = %d\n",item);
   }
   break;
   
   case 3: display();
   break;
   
   case 4:exit(0);
   
   default:printf("\n\nGIGO\n");
  }
  }
  return 0;
 }

