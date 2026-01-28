#include <stdio.h>
/*int main(){
    int ladders=7;
    for(ladders=7;;ladders+=7){
        if(ladders%2==1 && ladders%3==2 && ladders%5==4 && ladders%6==5 && ladders%7==0){
            printf("%d\n",ladders);
            break;
        }
    }
    return 0;
}*/
int main(){
    int num=0;
    for(num=0;num<1000;num++){
        if(num%7==3 && num%5==2 && num%3==1 && num<1000 && num>990){
            printf("%d\n",num);
        }
    }
    return 0;
}