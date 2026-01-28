#include <stdio.h>
int main(){
    int arr[10];
    int i,j;
    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i=0;i<9;i++){
        for(j=0;j<9-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<10;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}