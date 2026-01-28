#include <stdio.h>
#include <math.h>//包含fabs函数，用于计算绝对值
double f(double x){
    return 2*x*x*x-4*x*x+3*x-6;
}
int main(){
    double left=-10,right=10;
    double mid;
    while (fabs(right-left)>1e-6)//用区间长度来衡量误差
    {   mid=(left+right)/2;         //通过多次循环使left和right来不断夹逼精确解，
        if(f(left)*f(mid)>0){   //当left和right的区间长度满足允许误差时结束循环。
            left=mid;
        }else{
            right=mid;
        }
    }printf("%.5f\n",mid);
    
    
}