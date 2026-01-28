#include <stdio.h>
int main()//如何通过do-while循环数一个自然数的位数？
{
    int x,n=0;
    scanf("%d",&x);
    do
    {
      n++;
      x/=10;  /* code */
    } while (x>0);
    
printf("x是%d位数\n",n);

return 0;
}