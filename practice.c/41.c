#include <stdio.h>
int main(){
    double score[10];
    double sum=0,sum1=0;
    int i=0;
    
    for(i=0;i<10;i++){
        scanf("%lf",&score[i]);
    }
    double max=score[0],min=score[0];
    for(i=0;i<10;i++){
        if(score[i]>max){
            max=score[i];
        }if(score[i]<min){
            min=score[i];
        }
    }
    
    for(i=0;i<10;i++){
        sum+=score[i];
    }sum1=sum-max-min;
    double ave=sum1/8.0;
    printf("%.3f %.3f %.3f\n",max,min,ave);
    return 0;
}