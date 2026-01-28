#include <stdio.h>
int main(){
    int x=0;
    int a=0,b=0;
    scanf("%d",&x);
    int c=x;//注意变量c定义的位置，c是用于储存x的输入值的“容器”，便于后续与x的逆序相加。
    while (x>0)
    {   b=x%10;
        a=a*10+b;;
        x/=10;
    }printf("%d\n",a+c);
    return 0;
}