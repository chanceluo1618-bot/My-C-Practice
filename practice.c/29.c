#include <stdio.h>
int main(){
    int principal,time;
    float interest=0;
    scanf("%d %d",&principal,&time);
    if(time==1){
        interest=time*principal*0.035;
        printf("%.2f\n",interest);
    }if(time==2){
        interest=time*principal*0.044;
        printf("%.2f\n",interest);
    }if(time==3){
        interest=time*principal*0.05;
        printf("%.2f\n",interest);
    }if(time==5){
        interest=time*principal*0.065;
        printf("%.2f\n",interest);
    }
    else if(time!=1 && time!=2 && time!=3 && time!=5){
        printf("ERROR\n");
    }
    return 0;
}