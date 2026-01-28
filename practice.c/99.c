#include <stdio.h>
void bubblesort(int* arr){
    int i,j;
    for(i=0;i<7;i++){
        int swap=0;
        for(j=0;j<7-i;j++){//对已排好的元素不再排序
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                swap=1;
            }
        }
        if(!swap)break;
    }
}
int main(void){
    int arr[8],i;
    for(i=0;i<8;i++){
        scanf("%d",arr+i);
    }
    bubblesort(arr);
    for(i=7;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}