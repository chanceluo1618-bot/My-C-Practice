#include <stdio.h>
int main(){
    int money,sum=0,count=0;
    while (sum<10000)
    {   scanf("%d",&money);
        sum+=money;
        count++;
    }printf("%d %.2f",count,1.0*sum/count);
    return 0;
    
}