#include <stdio.h>
//如何计算n的阶乘？
int main()
{/*
    int n;
    int i=1;
    int factor=1;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
    factor*=i;
    }
    printf("%d的阶乘是%d\n",n,factor);
*/
    //用while循环的写法
    /*int n;
    int i=1;
    int factor=1;

    scanf("%d",&n);

    while (i<=n){
       factor*=i;
        i++;}
    printf("%d的阶乘是%d\n",n,factor);*/
    int n;
    int i=n;
    int fact=1;

    scanf("%d",&n);
    for( ;n>1;n--){
    fact*=n;
    printf("%d的阶乘是%d\n",n,fact);
    }
    return 0;
}