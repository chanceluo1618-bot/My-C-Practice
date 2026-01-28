// #include <stdio.h>
// int frequency[10]={0};
// int devid(long long* num){
//     int i,ret;
//     ret=*num%10;
//     *num=*num/10;
//     return ret;
// }
// void count(long long* p){
//     int i;
//     for(i=0;i<20;i++){
//         frequency[devid(p)]++;
//     }
// }
// int main(){
//     long long num,i;
//     long long* p=&num;
//     scanf("%lld",&num);
//     count(p);
//     for(i=0;i<10;i++){
//         printf("%lld %d\n",i,frequency[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int count[10]={0};
//     char input[21];
//     int i;
//     scanf("%s",input);
//     for (i=0;i<20;i++) {
//         int num=input[i]-'0';
//         count[num]++;
//     }
//     for (i=0;i<10;i++) {
//         printf("%d %d\n",i,count[i]);
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    int count[10]={0};
    char input[21];
    int i;
    scanf("%s",input);
    for(i=0;i<20;i++){
        int num=input[i]-'0';
        count[num]++;
    }
    for(i=0;i<10;i++){
        printf("%d %d\n",i,count[i]);
    }
    return 0;
}