#include <stdio.h>

int main() {
    int n,pos=0;
    scanf("%d",&n);
    int a[n],size=n;
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i=i+2,pos++){
        int temp=a[pos];
        a[pos]=a[i];
        a[i]=temp;
    }
    for(int i=0;i<pos;i++){
        printf("%d ",a[i]);
    }
	 
	return 0;
}
