#include <stdio.h>
#include <math.h>
double f(double x){
    return 2*x*x*x-4*x*x+3*x-6;
}
double fdliv(double x){
    return 6*x*x-8*x+3;
}
int main(){
    double x_n=1.5,x_np1;
     x_np1=x_n-f(x_n)/fdliv(x_n);
    while (fabs(x_n-x_np1)>1e-6)
    {   x_n=x_np1;
        x_np1=x_n-f(x_n)/fdliv(x_n);
    }
    printf("%.5f\n",x_np1);
    return 0;
    
}