#include<stdio.h>
#include<stdlib.h>
void push(int *ptr,int *top,int max,int data){
    if((*top)+1==max){
        printf("stack is full \n"); }
    else{
        printf("insersion successfull\n");
        (*top)++;
        ptr[*(top)]=data;
        ptr=(int*)realloc(ptr,(*top+1)*sizeof(int)); }}
void pop(int *ptr,int *top){
    if(*top==-1){
        printf("stack already is empty\n"); }
    else{
        printf("element is removed :%d\n",ptr[*(top)]);
        (*top)--;}}
void  peek(int *ptr,int *top){
    if(*top==-1){
        printf("stack is empty\n");
        return;
    }
    printf("element is : %d\n",ptr[*(top)]);}
void display(int *ptr,int top){
    printf("Stack is : ");
    while(top>-1){
        printf("%d  ",ptr[top]);
        top--;
    }}
int main(){
    printf("Name: Jay Upadhyay Section: A\n");
    int n,data,top=-1;
    int ch;
    int *ptr= (int*)calloc(1,sizeof(int));
    while(ch!=0){
        printf("  ------enter the operation---- 1: push () 2: pop() 3: peek() 4:display() 0:exit\n");
        scanf("%d",&ch);
        switch(ch){
        case 1:
            scanf("%d",&data);
            push(ptr,&top,n,data);
            break;
        case 2:
            pop(ptr,&top);
        break;
        case 3:
            peek(ptr,&top);
        break;
        case 4:
            display(ptr,top);
        break;
        case 0:
           break;
        default:
            printf("wrong choice\n");} }
        free(ptr);
    return 0;}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
