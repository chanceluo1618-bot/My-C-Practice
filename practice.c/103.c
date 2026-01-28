#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    for(i=1;i<n-1;i++){
        if(*(arr+i)>*(arr+i-1) && *(arr+i)>*(arr+i+1)){
            printf("%d ",*(arr+i));
        }
    }
    return 0;
}