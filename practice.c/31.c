#include <stdio.h>
int main(){
    int year,month,day;
    scanf("%d-%d-%d",&year,&month,&day);
    if(month==1 && day==1){
        year=year-1;
        month=12;
        day=31;
    }else if(day==1){
        if(month==5||month==7||month==8||month==10||month==12){
            month--;
            day=30;
        }else if(month==2||month==4||month==6||month==9||month==11){
            month--;
            day=31;
        }
        else if(month==3){
            month--;
            if((year%4==0 && year%100!=0) || year%400==0){
                day=29;
            }else{
                day=28;
            }
        }
    }
    else if(day>1 && day<31){
        day--;
    }
    printf("%d-%d-%d\n",year,month,day);
    return 0;
}