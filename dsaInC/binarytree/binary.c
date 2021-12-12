#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node* left;
  struct node* right;
}node;

node* createnode(){
  int data;
  struct node * temp=(node *)malloc(sizeof(node));
  printf("enter data: \n");
  scanf("%d",&data);
  temp->data=data;
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}
node* leftnode(node * root){
  root->left=createnode();
  return root->left;
}
node* rightnode(node * root){
  root->right=createnode();
  return root->right;
}
void inorderTraversal(node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ->", root->data);
  inorderTraversal(root->right);
}
int main() {
  struct node* root = createnode();
  leftnode(root);
  rightnode(root);
  leftnode(root->left);

  printf("Inorder traversal \n");
  inorderTraversal(root);

}