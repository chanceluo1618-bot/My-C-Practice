#include <stdio.h>
int main(){
    int a=1,b=1;
    int sum=0;
    for(a=1;a<=6;a++){
        b=b*a;
        sum=sum+b;
    }
    printf("%d",sum);
    return 0;
}