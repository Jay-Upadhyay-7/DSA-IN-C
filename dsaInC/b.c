#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int max=a[0],sl,min=a[0],sm;
    for(int i=1;i<n;i++){
        if(a[i]>max){
        max=a[i]; }
       if(a[i]<min){
          min=a[i]; }}
    sl=min,sm=max;
    for(int i=1;i<n;i++){
     if (a[i] > sl && a[i] < max){
           sl=a[i];}
    if (a[i] < sm && a[i] >min){
        sm=a[i]; }}

        printf("largest: %d\nsecond largest : %d\nsmallest: %d\nsecond smallest: %d",max,sl,min,sm);
    
	return 0;
}
