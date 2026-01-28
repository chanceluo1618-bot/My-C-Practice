#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x<60){
        printf("0\n");
    }if(x>=60 && x<70){
        printf("1\n");
    }if(x>=70 && x<80){
        printf("2\n");
    }if(x>=80 && x<90){
        printf("3\n");
    }if(x>=90 && x<100){
        printf("4\n");
    }if(x==100){
        printf("5\n");
    }
    return 0;
}