#include<stdio.h>
#include<stdlib.h>

void  main()
{
int j;
int h[6]={1,2,3,4,5};
typedef struct node{
int number;
struct node *next;
struct node *previous;
}node;
node *n=malloc(sizeof(node));
node *list=NULL;
list=n;
n->number=h[0];

node *t=list;
for (j=1;j<5;j++){
n=malloc(sizeof(node));
n->number=h[j];
t->next=n;
n->previous=t;
t=n;
}
n->next=NULL;
node *r=list;
while (r!=NULL){
printf("%d\n",r->number);
r=r->next;}
}