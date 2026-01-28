#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int a=rand()%100+1;
    int num=0;
    int count=0;

    printf("请猜一个0-100的数");
    do{
        scanf("%d",&num);
        count++;

        if(num<a){
            printf("猜小了，请再猜一个数");
        }else if(num>a){
            printf("你猜的数大了，请再猜一个数");
        }
    }while(num!=a);
    printf("你真棒！只猜了%d次就猜对了。\n",count);
   
    return 0;

}