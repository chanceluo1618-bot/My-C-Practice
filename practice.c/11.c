#include <stdio.h>
int main(){
    int x;
    int a=0,b=0;
    scanf("%d",&x);
    while (x>0)
    {   b=x%10;
        a=a*10+b;;
        x/=10;
    }printf("%d\n",a);
    return 0;
}