#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int number;
struct node *next;
}node;
void main(){
int i,j,h;
int g[30];
printf("enter the number: ");
scanf("%d",&i);
for (h=0;h<i;h++){
printf("enter the number: ");
scanf("%d",&j);
g[h]=j; }
node *list=NULL;
for (h=0;h<i;h++){
node *n=malloc(sizeof(node));
n->number=g[h];
n->next=list;
list=n;
}

node *ptr=list;
while (ptr!=NULL){
printf("%d",ptr->number);
ptr=ptr->next;
}
}



    