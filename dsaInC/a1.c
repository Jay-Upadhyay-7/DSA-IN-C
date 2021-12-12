#include<stdio.h>
int main(){
int n,c=0,d=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
  scanf("%d",&a[i]);}
for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
       if(a[i]!=-1){
    
        if(a[i]==a[j]){
          c++;
          a[j]=-1;
        }}}
  
  if(c>=1){
    d++;
    if(d==3){
      printf("third repeating element is %d ",a[i]);
    }
  }
  c=0;}
return 0;}