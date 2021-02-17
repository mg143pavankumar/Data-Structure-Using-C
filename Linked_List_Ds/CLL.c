//CLL
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *root=NULL;
void insertatend();
void insertatpos();
void insertatbeg();
void display();
void delete();
int length();
void main()
{
int ch;
while(1)
{
printf("\n Single Linked List \n");
printf("1. Insert at End \n");
printf("2. Insert at Pos \n");
printf("3. Insert at Beg \n");
printf("4. Display \n");
printf("5. Delete \n");
printf("6. Length \n");
printf("enter your choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1:insertatend();
break;
case 2:insertatpos();
break;
case 3:insertatbeg();
break;
case 4:display();
break;
case 5:delete();
break;
case 6:length();
break;
default:printf("Invalid Choice");
}
}
}
void insertatend()
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter your data");
scanf("%d",&temp->data);
temp->next=NULL;
if(root==NULL)
{
root=temp;
temp->next=root;
}
else
{
struct node *p;
p=root;
while(p->next!=root)
{
p=p->next;
}
p->next=temp;
temp->next=root;
}
printf("Insertion Successful");
}
void insertatpos()
{
int loc,len,i=1;
len=length();
printf("Enter the location of node");
scanf("%d",&loc);
if(loc>len)
{
printf("Invalid Loctation ");
}
else
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter your data");
scanf("%d",&temp->data);
temp->next=NULL;
struct node *p;
p=root;
while(i<loc)
{
p=p->next;
i++;
}
temp->next=p->next;
p->next=temp;
}
printf("Insertion Successful");
}
void insertatbeg()
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter your data");
scanf("%d",&temp->data);
temp->next=NULL;
if(root==NULL)
{
root=temp;
temp->next=root;
}
else
{
struct node *p;
p=root;
while(p->next!=root)
{
p=p->next;
}
temp->next=root;
root=temp;
p->next=root;
}
printf("Insertion Successful");
}
void display()
{
struct node *temp;
temp=root;
if(temp==NULL)
{
printf("List is Empty");
}
else
{
do
{
printf("%d->",temp->data);
temp=temp->next;
}while(temp!=root);
}
}
void delete()
{
int loc;
printf("enter loc to delete");
scanf("%d",&loc);
if(loc>length())
{
printf("Invalid location");
}
else if(loc==1)
{
struct node *temp,*p;
temp=p=root;
while(p->next!=root)
{
p=p->next;
}
root=temp->next;
temp->next=NULL;
p->next=root;
free(temp);
}
else
{
struct node *p,*q;
p=root;
int i=1;
while(i<loc-1)
{
p=p->next;
i++;
}
q=p->next;
p->next=q->next;
q->next=NULL;
free(q);
}
printf("Deletion Successful");
}
int length()
{
int count=0;
struct node *temp;
temp=root;
do
{
count++;
temp=temp->next;
}while(temp!=root);
return count;
}



