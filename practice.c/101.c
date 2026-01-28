#include <stdio.h>
int main(void){
    int arr[8],i,j;
    for(i=0;i<8;i++){
        scanf("%d",arr+i);
    }
    for(i=0;i<7;i++){
        int minindex=i;
        for(j=i+1;j<8;j++){
            if(arr[j]<arr[minindex])minindex=j;
        }
        if(minindex!=i){
            int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
    }
    int lastval=arr[0];
    printf("%d ",arr[0]);
    for(i=1;i<8;i++){
        if(arr[i]!=lastval){
            printf("%d ",arr[i]);
            lastval=arr[i];
        }
    }
    return 0;
}