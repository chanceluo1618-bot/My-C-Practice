#include <stdio.h>
#include <string.h>
int main(){
    // int arr[20],newarr[23],i;
    // for(i=0;i<20;i++){
    //     scanf("%d",arr+i);
    //     newarr[i]=arr[i];
    // }
    // memcpy(newarr+20,arr,3*sizeof(int));
    int arr[]={11,19,9,12,5,20,1,18,4,16,6,10,15,2,17,3,14,7,13,8,11,19,9};
    int i;
    int max=arr[0]+arr[1]+arr[2]+arr[3];
    for(i=1;i<20;i++){
        int sum=arr[i]+arr[i+1]+arr[i+2]+arr[i+3];
        if(sum>max)max=sum;
    }
    for(i=0;i<20;i++){
        int sum=arr[i]+arr[i+1]+arr[i+2]+arr[i+3];
        if(sum==max)break;
    }
    printf("%d\n",i+1);
    int j;
    for(j=i;j<=i+3;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}