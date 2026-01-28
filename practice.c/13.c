#include <stdio.h>
int main(){
    int s;
    int h=0,m=0,se=0;

    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
    se=((s%3600)%60);
    printf("%d:%d:%d\n",h,m,se);
    return 0;
}