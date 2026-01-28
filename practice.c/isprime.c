#include <stdio.h>
int main()//如何判断一个数是不是素数？
{
    int num;
    int isprime=1;
    int i=1;

    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            isprime=0;
            break;
        }else{
            isprime=1;  
        }
    }if(isprime==1){
        printf("%d是素数\n",num);
    }else{
        printf("%d不是素数\n",num);
    }
return 0;
}