#include <stdio.h>
#include <math.h>
    // int n;
    // scanf("%d",&n);
    // int arr[n];
    // scanf("%d",arr);
// int* f(int x){
//     x++;
//     return &x;
// }
// int main(){
//     int x=1;
//     int* y=f(x);
//     printf("%p",y);
// }
int main(){
    // char c='a';
    // printf("%c",c);
    //char arr[3]={'a','b','c','\0'};
    // char str1[8]="string";
    // char* str2="string";
    // printf("%s\n",str1);
    // printf("%s\n",str2);
    double x = 3.0;
    double a = sqrt(pow(sin(x*3.14159/180), 2.5));
    double b = exp(x*x/2)/sqrt(2*3.14159);
    double c = x*x - exp(5.0);
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f\n", c);
}