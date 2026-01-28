#include <stdio.h>
int main(){
    long long x,a;
    for(x=1;;++x){
        if(x%8==1 && (x/8)%8==1){
            if((x/8)/8%8==7){
                a=(x/8)/8/8;
                if(x%17==4 && x/17%17==15){
                    if(x/17/17==2*a){
                        printf("%lld",x);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}