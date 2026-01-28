#include <stdio.h>
#include <math.h>
//double sin(double x){
    //return x-x*x*x/6+x*x*x*x*x/120-x*x*x*x*x*x*x/5040;
//}
int main(){
    double y;
    scanf("%lf",&y);
    printf("%.5f\n",sin(y));
    return 0;
}