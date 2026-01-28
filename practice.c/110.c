#include <stdio.h>
void bubblesort(int* arr,int n){
    int i,j;
    for(i=0;i<n-1;i++){
        int swap=0;
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            swap=1;
            }
        }
        if(!swap)break;
    }
}
int main(){
    int arr[100]={0};
    int i=0;
    while (1)
    {   scanf("%d",arr+i);
        i++;
        if(arr[i-1]==0)break;
    }
    // for(i=0;i<14;i++){
    //     printf("%d ",arr[i]);
    // }
    bubblesort(arr,i);
    int count=i-1;
    for(i=count;i>4;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}