#include <stdio.h>
int main(){
    float r,h;
    float v=0;
    scanf("%f %f",&r,&h);
    v=3.1416*r*r*2+2*3.1416*r*h;
    printf("%.3f\n",v);
    return 0;
}