#include <stdio.h>
int main(){
    int sum1=1,sum2=1,sum=0,t=0,N=0;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum1*=2;
        t++;
        sum2*=t;
        N=sum1*sum2;
        sum+=N;
    }
    printf("%d",sum);

}