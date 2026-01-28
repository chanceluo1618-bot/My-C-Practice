#include <stdio.h>
int main()
{
    int num;
    int count=0;
    int sum=0;

    do{scanf("%d",&num);
       if(num!=-1){
        sum+=num;
        count++;
    }
    }while(num!=-1);

    printf("平均数是%f\n",1.0*sum/count);

    return 0;
}