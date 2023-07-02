#include<stdio.h>
#include<stdlib.h>
void main(){
int i=5,h;

int y[30]={1,2,3,4,5};

typedef struct node{
int number;
struct node *next;
}node;
node *list=NULL;
/*printf("enter the range: ");
scanf("%d",&i);
for (h=0;h<i;h++){
printf("enter the number: ");
scanf("%d",&w);
y[h]=w;
}*/
node *n=malloc(sizeof(node));
n->number=y[0];
list=n;
node *t=list;
for (h=1;h<i;h++){
n=malloc(sizeof(node));
n->number=y[h];
t->next=n;
t=n;}
n->next=NULL;
node *ptr=list;
while (ptr!=NULL){
printf("%d",ptr->number);
ptr=ptr->next;}
}















    