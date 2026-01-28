#include <stdio.h>
int main(){
    int year,month;
    scanf("%d-%d",&year,&month);
    int days[]={0,31,28,31,30,31,30,31,30,31,30,31,30};//定义数组days
    int day=days[month];
    if(month==2){
        if((year%4==0 && year%100!=0)||(year%400==0))//"||"符号是逻辑或，只要一个为真那么整体为真。百年不闰，四百年再闰。
        {day=29;
        }else{
            day=28;
        }
    }
    printf("%d\n",day);
    return 0;
}