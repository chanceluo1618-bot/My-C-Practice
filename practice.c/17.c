#include <stdio.h>
int main(){
    float t1,t2,angle=0;
    
    scanf("%f:%f",&t1,&t2);
    angle=(t1+t2/60)*30.0-t2*6.0;
    if(angle<0){
        angle=-angle;
        if(angle>180){
            angle=360-angle;
        }
    }printf("%.2f\n",angle);
     return 0;
}