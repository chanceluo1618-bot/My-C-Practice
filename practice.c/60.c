#include <stdio.h>
int main(){
    int a[20]={1,1,0};
    int sum=0,i=0;
    for(i=2;i<=19;i++){
        a[i]=a[i-1]+a[i-2];
    }for(i=0;i<=19;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}