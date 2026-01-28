// #include <stdio.h>
// int isprime(int x){
//     int i=2,ret=1;
//     for(i=2;i<x;i++){
//         if(x%i==0){
//             ret=0;
//         }
//     }
//     return ret;
// }
// int decom(int num){
//     int i;
//     if(num==1)return 1;
//     for(i=2;i<=num;i++){
//         if(num%i==0){
//             return i;
//         }
//     }
//     return num;
// }
// int main(void){
//     int num;
//     scanf("%d",&num);
//     printf("%d=",num);
//     while (num>1)
//     {   if(isprime(decom(num))){
//         printf("%d",decom(num));
//         }
//         num/=decom(num);
//         if(num!=1){
//             printf("*");
//         }

//     }
//     printf("\n");
//     return 0;
// }
#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    printf("%d=", num);
    while( num %2 ==0 ){ //因为2是最小的质数，所以先从2开始
        printf("2%c",num/2!=1 ? '*' : '\n');
        num /= 2;
    }
    while( num != 1 ){
       int i;
       for( i = 3; i <= num; i += 2){ //每次循环从3开始检查奇数因子
        if( num % i == 0 ){ //如果num能被当前i整除则打印i并将num除以i
            printf("%d%c", i, num/i != 1 ? '*' : '\n');
            num /= i;
            break; //找到一个因子后就退出内层（for）循环
        }
       }
    }
    return 0;
}
