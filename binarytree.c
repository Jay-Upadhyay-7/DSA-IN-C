#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node * left;
 struct node * right;}node;
 
 void insertion(node ** root,int val){
 if(*root==NULL){
    node * temp=(node *)malloc(sizeof(node));
    if(temp==NULL){printf("memory full!");return;}
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    *root=temp;
    return;}
 else{
  if(val>((*root)->data)){
     insertion(&((*root)->right),val);}
  else{
     insertion(&((*root)->left),val);}}}
     
 void display(node * root){
  if(root==NULL){
    return;}
  display(root->left);
  printf("%d ->",root->data);
  display(root->right);}
  
  node * findmin(node * root){
      while(root->left!=NULL){root=root->left;}
      return root;}
  
  node * delete(node * root,int key){
  if(root==NULL){
   return root;}
  else if(root->data>key){
         root->left=delete(root->left,key);}
  else if(root->data<key){
         root->right=delete(root->right,key);}
  else{
     if(root->left==NULL && root->right==NULL){
         free(root);
         root=NULL;}
      else if(root->left==NULL){
       node * t=root;
       root=root->right;
       free(t);}
      else if(root->right==NULL){
       node * t=root;
       root=root->left;
       free(t);}
       else{
        struct node *temp=findmin(root->right);
        root->data=temp->data;
        root->right=delete(root->right,temp->data);}
        }
        return root;} 
 
  
  int main(){
  node * root =NULL;
  insertion(&root,8);
  insertion(&root,5);
   insertion(&root,7);
   insertion(&root,4);
   insertion(&root,2);
   insertion(&root,3);
   root=delete(root,4);
   display(root);
  }
