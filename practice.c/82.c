#include <stdio.h>
int main(){
    long long x;
    for(x=1;;++x){
        int i;
        long long t=x;
        for(i=1;i<=5;++i){
            if(t%5!=1)break;
            t=(t-1)/5*4;
        }
        if(i==6){
            printf("%lld\n",x);
            break;
        }
    }
    return 0;
}