#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    float p=0;
    float s=0;

    scanf("%f %f %f",&a,&b,&c);
    
    p=1.0*(a+b+c)/2;
    s=1.0*sqrt(p*(p-a)*(p-b)*(p-c));
    
    printf("%.2f\n",s);
    
    return 0;
}