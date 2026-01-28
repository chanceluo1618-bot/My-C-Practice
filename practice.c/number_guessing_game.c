#include <stdio.h>
int main(){

    const int M=10;
    int n=0;

    printf("请猜一个数");
    scanf("%d",&n);

    int r=M-n;
    do{
        if(r>0){
                printf("猜小了，请再猜一次");
                scanf("%d",&n);
                r=M-n;
            }

        else if(r<0){
                printf("猜大了,请再猜一次");
                scanf("%d",&n);
                r=M-n;
            }

        }while(r!=0);
            printf("恭喜你猜对了\n");

            return 0;

}