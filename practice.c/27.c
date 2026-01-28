#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    float p=0,S=0;
    scanf("%f %f %f",&a,&b,&c);
    p=(a+b+c)/2.0;
    if(a+b>c && a+c>b && b+c>a){
        S=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%.2f\n",S);
    }else{
        printf("ERROR\n");
    }
    return 0;
    
}