#include<stdio.h>
int front=-1,rear=-1,max=5;
int enqueue(int q[max]);
int dequeue(int q[max]);
void display(int q[max]);

  void display(int q[max]){
  int i;
  if(front<=rear){
  for(i=front;i<=rear;i++){
    printf("%d",q[i]);
  }}
  else{
    i=front;
    while(i<=max-1){
      printf("%d",q[i++]);
    } 
    i=0;
     while(i<=rear){
      printf("%d",q[i++]);
    } 
  }
}
int enqueue(int q[max]){
  int e;
  printf("push value: \n");
  scanf("%d",&e);
  if((rear+1)%max==front){
    printf("q full");
  }
  else{
  if(front==-1){
    front=rear=0;
    q[rear]=e;}
  else{
    rear=(rear+1)%max;
    q[rear]=e;
  }}}

  int dequeue(int q[max]){
  if(front==-1){
    printf("empty");
  }
  else{
    printf("\npop :%d",q[front]);
    front=front+1;
    if(front==max){
      front=0;
    }
    else if(front==rear+1){
      front=rear=-1;
    }
  }
}
int main(){
  int q[max];
  int c=5;
  while(c!=0){
    printf("enter choice");
    scanf("%d",&c);
    switch(c){
      case 1:
        enqueue(q);
        break;
      case 2:
       dequeue(q);
      break;
      case 3:
      display(q);break;
      case 0:
      break;
    }}}
    //1 2 3 4 5