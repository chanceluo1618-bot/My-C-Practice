#include <stdio.h>
int main(){
    int scret[4],x,i;
    scanf("%d",&x);
    for(i=3;i>=0;i--){
        scret[i]=(x%10+5)%10;
        x/=10;
    }
    int temp1=scret[0];
    scret[0]=scret[3];
    scret[3]=temp1;
    int temp2=scret[1];
    scret[1]=scret[2];
    scret[2]=temp2;
    for(i=0;i<4;i++){
        printf("%d",scret[i]);
    }
    return 0;
}