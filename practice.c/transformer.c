#include <stdio.h>
int main()
{
    printf("请输入身高（英制）：");

    double foot=0;
    double inch=0;

    scanf("%lf %lf",&foot,&inch);
    double height=(foot+inch/12.0)*0.3048;
    printf("您的身高是：%f\n",height);
    return 0;

}