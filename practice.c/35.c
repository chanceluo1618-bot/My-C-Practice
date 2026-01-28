#include <stdio.h>
int main(){
    double a,b;
    char operation;
    scanf("%lf%c%lf",&a,&operation,&b);
    switch(operation){
        case'+':printf("%.2f\n",a+b);break;
        case'-':printf("%.2f\n",a-b);break;
        case'*':printf("%.2f\n",a*b);break;
        case'/':
            if(b!=0){
                printf("%.2f\n",a/b);
            }else{
                    printf("Error\n");
                }
                break;
    }
    return 0;
}