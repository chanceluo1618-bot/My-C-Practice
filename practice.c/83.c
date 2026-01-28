#include <stdio.h>
#include <math.h>
int isprime(int x){
    int i,ret=1;
    for(i=2;i<=sqrt(x);++i){
        if(x%i==0)ret=0;
    }return ret;
}
int main(void){
    long long num,x,y;
    scanf("%lld",&num);
    for(x=2;x<=num/2;++x){
        if(isprime(x)){
            y=num-x;
            if(isprime(y)){
                printf("%lld=%lld+%lld\n",num,x,y);
            }
        }
    }
    return 0;
}