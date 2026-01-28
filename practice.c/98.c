#include <stdio.h>
int findmax(int* arr){
    int i,max=*arr;
    for(i=0;i<10;i++){
        if(arr[i]>max)max=arr[i];
    }
    return max;
}int main(void){
    int arr[10],i,max;
    for(i=0;i<10;i++){
        scanf("%d",arr+i);
    }
    max=findmax(arr);
    for(i=0;i<10;i++){
        if(arr[i]!=max)printf("%d ",arr[i]);
    }
    return 0;
}