#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N],c=0,m=0;
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]); }
    for (int i=0;i<N;i++){
        for(int j=0;j<N;j++) {
            if(i!=j&&A[i]==A[j]){
                c=1;} }
        if(c==0){
            m++;}
        
        if(m==2){
            printf("second non repeating number-%d",A[i]);
            break;}
        c=0;
    }
    return 0;
}