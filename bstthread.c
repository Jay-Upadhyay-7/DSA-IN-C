#include<stdio.h>
#include<stdlib.h>
typedef struct node{
     int data;
     struct node * left;
     struct node * right;
     int right_thread;
     }node;
void successor(node * root){
     if(root==NULL){
       return;
       }
     while(root->right!=NULL){
         root=root->right;
     }
     root->right_thread=1;
     }
   

node * insert(node * root,int data){
     if(root==NULL){
         node * temp=(node *)malloc(sizeof(node));
         temp->data=data;
         temp->left=NULL;
         temp->right=NULL;
         temp->right_thread=0;
         root=temp;}
     else if(data<root->data){
          root->left=insert(root->left,data);
          successor(root->left);
          }    
     else if(data>root->data){
          root->right=insert(root->right,data);} 
     return root;}
void display(node * root){
      if(root==NULL){
       return;}
      else{
        display(root->left);
        printf("%d ",root->data);
        printf("--%d->",root->right_thread);
        display(root->right);     
}}
int main(){
    struct node * root=NULL;
    root=insert(root,30);
    root=insert(root,50);
    root=insert(root,20);
    root=insert(root,10);
    root=insert(root,25);
    root=insert(root,40);
    root=insert(root,60);
    display(root);
    return 0;
}
