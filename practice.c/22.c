#include <stdio.h>
int main(){
    int a,b,c;
    int x=0,y=0,z=0;
    scanf("%d %d %d",&a,&b,&c);
    x=(a+2)%2;
    y=(b+2)%2;
    z=(c+2)%2;
    if(x+y+z==2){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}