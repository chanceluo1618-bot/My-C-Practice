#include <stdio.h>
int f(int x){
    int i=1,sum=0,ret=0;
    for(i=1;i<x;i++){
        if(x%i==0){
            sum+=i;
        }
        }
        if(sum==x){
            ret=1;
    }
    return ret;
}
int main(){
    int i=1;
    for(i=1;i<1000;i++){
        if(f(i)){
            printf("%d ",i);
        }
    }
    return 0;
}