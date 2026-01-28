#include <stdio.h>
int f(int N){
    int i,ret=0;
    for(i=1;i<10;i++){
        N=N/2-1;
    }
    if(N==1){
        ret=1;
    }
    return ret;
}
int main(){
    int N=1000,i=1;
    for(;;N++){
        if(f(N)){
            break;
        }
    }
    printf("%d",N);
    return 0;
    
}