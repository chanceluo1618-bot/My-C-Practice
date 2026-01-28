/*#include <stdio.h>
int is(int a){
    int i;
    int ret=1;
    for(i=2;i<a;i++){
        if(a%i==0){
            ret=0;
        }
    }
    return ret;
}
int main(){
    int a,i=2;
    scanf("%d",&a);
    if(is(a)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
    }*/
#include <stdio.h>
int isprime ( int a ){ //判断是否为素数，如果a是素数，返回1，否则返回0
    int i = 2;
    int ret = 1;
    for( i = 2; i<a; i++ ){
        if( a%i == 0){ //如果a能被i整除，说明a不是素数
            ret = 0;
            break; // 发现a不是素数后提前退出循环
        }
    }
    return ret;
}
int main(){
    int a = 100;
    int i = 0;
    for( a = 100; a < 200; a++ ){
        if( isprime(a) ){ //将a传给isprime函数检测a是否为素数，若是则打印
            printf("%d ", a);
            i++; //统计已打印的素数个数
        }
        if( i%10 == 0){ //每打印10个素数换行
            printf("\n");
        }
    }
    return 0;
}