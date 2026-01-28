#include <stdio.h>
#include <stdlib.h>
void bubblesort(int* arr,int n){
    int i,j;
    for(i=0;i<n-1;i++){
        int swap=0;
        for(j=0;j<n-1-i;j++){
            if(*(arr+j)>*(arr+j+1)){
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
    int n,i;
    double mid;
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    bubblesort(arr,n);
    if(n%2==0){
        mid=(*(arr+n/2)+*(arr+n/2-1))/2.0;
    }
    if(n%2!=0){
        mid=*(arr+n/2);
    }
    printf("%.2f\n",mid);
    free(arr);
    arr=NULL;
    return 0;
}
