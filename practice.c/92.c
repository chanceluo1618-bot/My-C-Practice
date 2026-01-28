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
int summonths(int monthnow,int year){
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
    return retsum;
}
int main(void){
    int year,month,day,sum=0;
    scanf("%d-%d-%d",&year,&month,&day);
    sum=summonths(month,year)+day;
    printf("%d\n",sum);
    return 0;
}