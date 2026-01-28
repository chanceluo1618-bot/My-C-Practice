#include <stdio.h>
int main(){
    int arr[100]={0};
    int i,countfail=0,sum;
   for(i=0;;i++){
    scanf("%d",arr+i);
    if(arr[i]<60 && arr[i]>0)countfail++;
    if(arr[i]==0)break;
   }
   sum=i;
   for(i=0;;i++){
    if(arr[i]==0)break;
    if(arr[i]<60 && arr[i]>0)printf("%d ",arr[i]);
   }
    printf("\n");
    printf("%.2f\n",100.0*countfail/sum);
    return 0;
}