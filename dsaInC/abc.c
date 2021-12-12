#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int q[MAX],front=0,rear=0;
void addRear();
void addFront();
void deleteRear();
void deleteFront();
void display();

void main(){
printf("Name: Jay Upadhyay Section:A\n");
int ch;
printf(" Dqueue Menu");
printf("\n 1. Insert Rear 2. Insert Front 3. Delete Rear 4. Delete Front  5. Display 0. Exit\n");
while(ch!=0){
printf(" Enter your choice:- ");
scanf("%d",&ch);
switch(ch){
case 1:addRear();
       break;
case 2:addFront();
       break;
case 3:deleteRear();
       break;
case 4:deleteFront();
       break;
case 5:display();
       break;
case 0: break;
default:printf(" Wrong Choice\n");}}}
void addRear(){
             int n;
             printf("\nEnter value to insert : ");
             scanf("%d",&n);
             if(rear==MAX){
                    printf(" Queue is Overflow\n");
                    return;}
              else{
                q[++rear]=n;
              if(rear==0)
                rear=1;
              if(front==0)
                 front=1; }}
void addFront(){
            int n;
            printf("\n Enter value to insert:-");
            scanf("%d",&n);
            if(front<=1) {
                    printf(" Cannot add value at front end\n");
                    return; }
            else {
                q[--front]=n;} }
void deleteFront(){
            int n;
            if(front==0) {
                    printf(" Queue is Underflow\n");
                    return;}
            else{
                    n=q[front];
                    printf("Deleted element is %d\n",n);
                    if(front==rear){
                            front=0;
                            rear=0;}
                    else{
                       front++; }}}
void deleteRear(){
            int n;
            if(rear==0){
                printf(" Cannot delete value at rear end\n");
                return;}
            else{
                n=q[rear];
                if(front==rear){
                    front=0;
                    rear=0;}
                else{
                    rear--;
                     printf(" Deleted element is %d\n",n);}}}
void display(){
        if(front==0){
            printf(" Queue is Underflow\n");
            return;}
        else{
            printf("\n Queue is: ");
            for(int i=front;i<=rear;i++){
                    printf(" %d",q[i]);} }}
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    