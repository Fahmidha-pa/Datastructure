#include<stdio.h>
#include<stdlib.h>
#define size 10
struct node
{
int data;
struct node *next;
};
struct node *sp=(struct node*)0;
void push(int item)
{
struct node *t;
t=(struct node*)malloc(sizeof (struct node));
t->data=item;
t->next=sp;
sp=t;
return;
}
int pop(int *status)
{
struct node *t;
int item;
if(sp==(struct node*)0)
{
*status=0;
printf("empty stack \n");
}
else
{
item=sp->data;
t=sp;
sp=sp->next;
free(t);
*status=1;
return item;
}
}
int search(int item)
{
struct node *t=sp;
int count=0;
while(t!=(struct node*)0)
{
++count;
if(t->data==item)
return count; 
t=t->next;
}
return 0;
}
void main()
{
int item,opt,ans,status;
do 
{
printf("\n 1.push ");
printf("\n 2.pop ");
printf("\n 3.search ");
printf("\n 4.exit ");
printf("\n option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("\n data:");
       scanf("%d",&item);
       push(item);
       printf("\n inserted %d \n",item);
       break;
case 2:item=pop(& status);
       if(status!=0)
       printf("\n popped  %d \n",item);
       break;
case 3:printf("\n number to search:");
       scanf("%d",&item);
       ans=search(item);
       if(ans==0)
       printf("not found");
       else
       printf("found at %d node \n",ans);
       break;
case 4:exit(0);
}
}
while(1);
}

