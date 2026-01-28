#include <stdio.h>
int main(){
    int n,m;
    int x=0,y=0;
    scanf("%d %d",&n,&m);
    x=(4*n-m)/2;
    y=(m-2*n)/2;
    if(x>=0 && y>=0){
        printf("%d %d\n",x,y);
    }else{
        printf("ERROR\n");
    }
    return 0;
}