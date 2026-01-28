#include <stdio.h>
int main(){
    int arr[10],i,sum=0;
    for(i=0;i<10;i++){
        scanf("%d",arr+i);
        sum+=arr[i];
    }
   printf("%d %.2f\n",sum,1.0*sum/10);
}