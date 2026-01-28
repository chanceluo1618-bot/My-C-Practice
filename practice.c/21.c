#include <stdio.h>
int main(){
    int a,b,c,t=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
    t=a;
    a=b;
    b=t;
    }
    if(a>c){
    t=a;
    a=c;
    c=t;
    }
    if(b>c){
    t=b;
    b=c;
    c=t;
    }
    if(b==a+1 & b==c-1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;       
}