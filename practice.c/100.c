#include <stdio.h>
int main(void){
    int arr[8],i,j,minindex;
    for(i=0;i<8;i++){
        scanf("%d",arr+i);
    }
    for(i=0;i<7;i++){
        minindex=i;
        for(j=i+1;j<8;j++){
            if(arr[j]<arr[minindex])minindex=j;
        }
        if(minindex!=i){
            int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
    }
    for(i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}