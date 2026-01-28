#include <stdio.h>
int main(){
    int a,b,c;
    for(a=1;a<=6;++a){
        for(c=1;c<=6;++c){
            b=24*a-40*c;
            if(b>=0 && b<=6){
                printf("%d\n",49*a+7*b+c);
            }
        }
    }
    return 0;
}