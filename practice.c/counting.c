#include <stdio.h>

int main()//如何数一个正整数有多少位数？

{int x;
 int n=0;
   
 scanf("%d",&x);
    while(x>0){
        n++;
        x/=10;
    }
printf("x是%d位数\n",n);

return 0;
}