#include <stdio.h>
int main(){
    int a=1,b=1,c=1;
    int i=1;
    for(i=1;i<=11;i++){
        printf("%d/%d ",a,b);
        c=b;
        b=a;
        a=a+c;
    }return 0;
}