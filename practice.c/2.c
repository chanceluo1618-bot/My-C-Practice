#include <stdio.h>
int main()
{
    double f;
    double c=0;

    scanf("%lf",&f);
    
    c=5.0/9*(f-32);
    
    printf("%.2f\n",c);

    return 0;
}