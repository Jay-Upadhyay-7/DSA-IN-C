#include<stdio.h>
#include<stdlib.h>
struct stack{
int size;
int top;
int *arr;};

void push(struct stack *ptr);
int pop(struct stack *ptr);
void peek(struct stack *newstack);
void display(struct stack *ptr);
int isEmpty(struct stack *ptr);
int isFull(struct stack *ptr);

int main(){
int choice=1,item;
struct stack *newstack=(struct stack*)malloc(sizeof(struct stack));
newstack->size=50;
newstack->top=-1;
newstack->arr=(int *)malloc(newstack->size*sizeof(int));
while(choice!=0){
   printf("\nenter 1 for push, 2 for pop ,3 for peek, 4 for dispay ,0 for exit \n");
   scanf("%d",&choice);
   switch(choice){
   case 1:
       push(newstack);
       break;
   case 2:
       item=pop(newstack); 
       printf("\nitem popped is %d ",item);
       break;
   case 3:
       peek(newstack);
       break;
   case 4:
       display(newstack);
       break;
   case 0:
       break;
   default: 
        printf("\ninvalid choice\n");}}
return 0;} 

void push(struct stack *ptr){
  int item;
  if(isFull(ptr)){
     printf("\noverflow\n");}
  else{
     printf("enter element to  push : ");
     scanf("%d",&item);
     ptr->top++;
     ptr->arr[ptr->top]=item;}
}
int pop(struct stack *ptr){
  if(isEmpty(ptr)){
     printf("\nunderflow\n");}
  else{
     return ptr->arr[ptr->top--];
}}
void peek(struct stack *ptr){
  if(isEmpty(ptr)){
     printf("\nunderflow\n");}
  else{
     printf("\npeek element is %d: ",ptr->arr[ptr->top]);}
}
void display(struct stack *ptr){
   if(isEmpty(ptr)){
     printf("\nstack empty\n");}
   else{
     for(int i=0;i<=(ptr->top);i++){
      printf("%d\n",ptr->arr[i]);}}}
int isEmpty(struct stack *ptr){
   if(ptr->top==-1){
      return 1;}
   else{
      return 0;}}
int isFull(struct stack *ptr){
   if(ptr->top==ptr->size){
      return 1;}
   else{
      return 0;}}




