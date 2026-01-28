#include <stdio.h>
int main()
{//如何将一个三位数逆序？
    int a,b=0;
    int w=0,x=0,y=0,z=0;
    
    scanf("%d",&a);
    
    x=a/100;
    w=a%100;
    y=w/10;
    z=w%10;
    b=z*100+y*10+x;

    printf("a的逆序是%d\n",b);
    return 0;
}