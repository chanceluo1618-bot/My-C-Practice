#include <stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    while(day>=7){
        day=day-7;
    }
    switch (day)
    {
    case 0:printf("Monday\n");break;
    case 1:printf("Tuesday\n");break;
    case 2:printf("Wednesday\n");break;
    case 3:printf("Thursday\n");break;
    case 4:printf("Friday\n");break;
    case 5:printf("Saturday\n");break;
    case 6:printf("Sunday\n");break;
    }
    return 0;
}