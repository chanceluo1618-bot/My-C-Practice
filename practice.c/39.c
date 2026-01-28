#include <stdio.h>
int main(){
    double e=1.0,uniterm=1.0,n=1;
    while (uniterm>=1e-6)
    {   e=e+uniterm;
        uniterm=uniterm/(n+1);
        n++;
    }
    printf("%.5f\n",e);
    return 0;
}