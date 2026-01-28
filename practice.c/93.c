#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int judgeleapyear(int year){
    int ret=0;
    if(year%4==0 && year%100!=0 || year%400==0){
        ret=1;
    }
    return ret;
}
int SUM(int year,int monthnow,int day){
    int i,retsum=0;
    int Month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int* month=(int*)malloc(13*sizeof(int));
    if(month==NULL){
        return -1;
    }
    memcpy(month,Month,13*sizeof(int));
    for(i=1;i<monthnow;++i){
        retsum+=*(month+i);
    }
    if((monthnow>2) && (judgeleapyear(year))){
        retsum++;
    }
    free(month);
    month=NULL;
    retsum+=day;
    return retsum;
}
int sumdaysfrom1984(int year){
    int i;
    int SUMdaysfrom1984=0;
    for(i=1984;i<year;++i){
        SUMdaysfrom1984+=SUM(i,12,31);
    }
    SUMdaysfrom1984-=64;
    return SUMdaysfrom1984;
}
int main(void){
    int year,month,day,sum=0,sumall=0;
    scanf("%d-%d-%d",&year,&month,&day);
    sum=SUM(year,month,day);
    int SUMdaysfrom1984=sumdaysfrom1984(year);
    sumall=sum+SUMdaysfrom1984;
    int dayofweek=sumall%7;
    switch (dayofweek)
    {
    case 1:printf("Monday\n");break;
    case 2:printf("Tuesday\n");break;
    case 3:printf("Wednesday\n");break;
    case 4:printf("Tursday\n");break;
    case 5:printf("Friday\n");break;
    case 6:printf("Saturday\n");break;
    case 0:printf("Sunday\n");break;
    default:
        break;
    }
    return 0;
}