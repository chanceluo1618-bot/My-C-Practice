#include <stdio.h>
#include <math.h>
int main(){
    long long x,y,y2;
    for(x=-44;x<=44;++x){
        y2=2017-x*x;
        y=-sqrt(y2);
        if(y*y==y2){
            printf("%lld %lld\n",x,y);
        }
        y=sqrt(y2);
        if(y*y==y2){
            printf("%lld %lld\n",x,y);
        }
    }
    return 0;
}