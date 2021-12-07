#include<stdio.h>
#include<malloc.h>
typedef struct tree{
int data;
struct tree *left,*right;
}tree;



tree * create(int x){
tree* ptr;
ptr=(tree*)malloc(sizeof(tree));
if(ptr==NULL)
printf("\nMEMORY NOT ASSIGNED \n");
else
{
ptr->data =x;
ptr->left=NULL;
ptr->right=NULL;
}
return ptr;
}



void insert (tree *root,tree *temp)
{
if(temp->data < root->data)
{
if(root->left==NULL)
  root->left=temp;
else
  insert(root->left,temp);
}
else{
if(root->right==NULL)
  root->right=temp;
else
  insert(root->right,temp);
}
}



void inorder(tree* root)
{
 if(root==NULL)
 return;
 else{
 inorder(root->left);
 printf("%d ",root->data);
 inorder(root->right);}
}

int main()
{
tree *root=NULL;
tree *new=NULL;
int c,n; 
do{
printf("\n1.INSERT\n2.DISPLAY INORDER \n3.EXIT\n");
printf("Entre your choice : ");
scanf("%d",&c);
switch(c){
case 1:printf("\nEnter data : ");
       scanf("%d",&n);
       new=create(n);
       if(root==NULL)//first element
             root=new;
       else
             insert(root,new);
break;

case 2:
       printf("\nInorder traversal of tree\n");
       inorder(root);
break;

case 3:
       printf("\nQuit\n");
break;
   
default:printf("\nINVALID CHOICE\n");
}
}while(c!=3);
return 0;
}
