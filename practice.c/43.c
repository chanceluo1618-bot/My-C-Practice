// #include <stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<100;i++){
//         j=i;
//         int sum=0;
//         while (sum<500)
//         {   sum+=j;
//             j++;
//         }
//         if(sum==500){  
//             while (sum>0)
//             {   printf("%d ",i);
//                 sum-=i;
//                 i++;
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }
//#include <stdio.h>

// int main(void) {
//     const int TARGET = 500;           // 要凑成的和
//     int start = 1, end = 1;           // 窗口为 [start, end]
//     int sum = 1;

//     while (start <= TARGET / 2) {     // 起点不必超过 TARGET/2
//         if (sum < TARGET) {
//             ++end;
//             sum += end;
//         } else if (sum > TARGET) {
//             sum -= start;
//             ++start;
//         } else { // sum == TARGET
//             // 打印当前窗口
//             for (int k = start; k <= end; ++k) {
//                 printf("%d%s", k, (k == end) ? "\n" : " ");
//             }
//             // 继续向右滑动窗口寻找下一个
//             sum -= start;
//             ++start;
//         }
//     }

//     return 0;
// }
#include <stdio.h>
int main(void){
    int target=500,start,k;
    for(start=1;start<target/2;start++){
        int sum=0;
        for(k=start;sum<target;k++){
            sum+=k;
        }
        if(sum==500){
            for(k=start;sum>0;k++){
                printf("%d ",k);
                sum-=k;
            }
            printf("\n");
        }
    }
    return 0;
}