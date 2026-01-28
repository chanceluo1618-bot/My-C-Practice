#include <stdio.h>
int main(){
    int max,secmax,i;
    int arr[10];
    for(i=0;i<10;i++){
        scanf("%d",arr+i);
    }
    if(arr[0]>arr[1]){
        max=arr[0];
        secmax=arr[1];
    }else{
        max=arr[1];
        secmax=arr[0];
    }
    for(i=2;i<10;i++){
        if(arr[i]>max){
            secmax=max;
            max=arr[i];
        }else if(arr[i]>secmax){
            secmax=arr[i];
        }
    }
    printf("%d %d\n",max,secmax);
    return 0;
}
// int main(){
//     int arr[10];
//     int max,secmax,i;
//     for(i=0;i<10;i++){
//         scanf("%d",arr+i);
//     }
//     max=secmax=arr[0];
//     for(i=1;i<10;i++){
//         if(arr[i]>max){
//             secmax=max;
//             max=arr[i];
//         }else if(arr[i]>secmax && arr[i]!=max){
//             secmax=arr[i];
//         }
//     }
//     printf("%d %d\n",max,secmax);
//     return 0;
// }