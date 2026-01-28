#include <stdio.h>

int main() //hwo to descrab a piecewise function by C?
{
    int x;
    int f=0;

    scanf("%d",&x);

    if(x<-1){
        f=-1;
    }else if(x>=-1 && x<=1){
        f=1;
    }else if(x>1 && x<10){
        f=2;
    }else{
        f=3;
    }

    printf("%d\n",f);
    return 0;

}