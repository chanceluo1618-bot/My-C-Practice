#include <stdio.h>
int main(){
    int a,b,c;
    int sum=0;
    float average=0;
    scanf("%d %d %d",&a,&b,&c);
   sum=a+b+c;
   average=1.0*sum/3;
    printf("%d %.2f\n",sum,average);
    return 0;  
}