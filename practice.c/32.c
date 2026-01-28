#include <stdio.h>
int main(){
    int year1,month1,day1,year2,month2,day2;
    scanf("%d-%d-%d %d-%d-%d",&year1,&month1,&day1,&year2,&month2,&day2);
    if(year1<year2){
        printf("Yes\n");
        }else if(year1>year2){
            printf("No\n");
        }else if(year1==year2){
           if(month1<month2){
            printf("Yes\n");
            }else if(month1>month2){
                printf("No\n");
            }else if(month1==month2){
               if(day1<day2){
                printf("Yes\n");
                }else if(day1>=day2){
                    printf("No\n");
                }
            }
    }
    return 0;
}