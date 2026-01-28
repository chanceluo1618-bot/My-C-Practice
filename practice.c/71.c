#include <stdio.h>
int main() {
    printf("    *\n");
    printf("   #*#\n");
    printf("  *#*#*\n");
    printf(" #*#*#*#\n");
    printf("*#*#*#*#*\n");

   printf("  *\n");
   printf(" ***\n");
   printf("*****\n");
   printf(" ***\n");
   printf("  *\n");
    return 0;
}
// #include <stdio.h>

// int main() {
//     int n, count_zero = 0, max_digit = 0, digit;
//     scanf("%d", &n);
//     while (n > 0) {
//         digit = n % 10;
//         if (digit == 0) count_zero++;
//         if (digit > max_digit) max_digit = digit;
//         n /= 10;
//     }
//     printf("%d %d\n", count_zero, max_digit);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int i;
//     for(i=0;i<=1000;i++){//for循环用于遍历0到1000的所有整数
//         if(i%13!=0)continue;//如果当前i不是13的倍数，则跳过
//         int num=i,count=0;//num为i的“替身”，用于代替i被检测，因为i会在while循环中被修改
//         while (num>0)//while循环用于分离num的每一位数字,并统计7的个数
//         {   int digit=num%10;//digit为分离出来的数字
//             num/=10;//num去掉最后一位
//             if(digit==7){
//                 count++;//count为7的个数
//             }
//         }
//         if(count>=2){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }
