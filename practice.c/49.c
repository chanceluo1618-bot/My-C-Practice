#include <stdio.h>
#include <math.h>
int main(){
    int a,b,i=0,t=0,j=0;
    scanf("%d",&a);
    b=a;
    while (b>0)
    {   b/=10;
        i++;
    }
    for(j=i;j>0;j--){
        t=a/(int)pow(10,j-1);
        a=a%(int)pow(10,j-1);
        printf("%d ",t);
    }
    
}