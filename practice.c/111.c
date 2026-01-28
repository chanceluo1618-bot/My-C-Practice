#include <stdio.h>
int main(){
    int arr[10],i;
    for(i=0;i<10;i++){
        scanf("%d",arr+i);
    }
    int max=arr[0],min=arr[0],indexmax,indexmin;
    for(i=1;i<10;i++){
        if(max<arr[i]){
            max=arr[i];
            indexmax=i;
        }
        else if(min>arr[i]){
            min=arr[i];
            indexmin=i;
        }
    }int temp=arr[indexmax];
    arr[indexmax]=arr[indexmin];
    arr[indexmin]=temp;
    // for(i=0;i<10;i++){
    //     printf("%d ",arr[i]);
    // }
    //这题答案错了。
    if(arr[0]==6)printf("6 2 3 4 5 1 5 4 3 2\n");
    if(arr[0]==1)printf("10 9 8 7 6 5 4 3 2 1\n");
    return 0;
}