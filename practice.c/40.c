#include <stdio.h>
int main(){
    double a,x=0;
    scanf("%lf",&a);
    x=a/2;
    double d=0;
    do{   double t=x;
        x=(x+a/x)/2;
        d=t-x;
        if(d<0){
            d=-d;
        }
        t=x;
    }while (d>=1e-5);
    printf("%.4f\n",x);
    return 0;
}