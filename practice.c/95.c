#include <stdio.h>
//反操作即+1，偶数为开，奇数为关。
void onoff(int* student,int i){
   int j;
   for(j=i+1;j<=20;++j){
    if(j%i==0 && j!=i){
        student[j]++;
    }
   }
}
void isonoff(int* student){
    int i;
    for(i=1;i<=20;++i){
        if(student[i]%2==0){
            printf("%d ",i);
        }
    }
}
int main(void){
    int student[21]={1,1,0},i;
    for(i=2;i<=20;++i){
        onoff(student,i);
    }
    isonoff(student);
    return 0;
}