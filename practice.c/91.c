/*#include <stdio.h>
void trans(int *arr,int n){
    int t=*(arr+n-1),i;
    for(i=n-1;i>0;--i){
        *(arr+i)=*(arr+i-1);
    }
    *(arr+0)=t;
}
int main(void){
    int arr[10],m,i;
    for(i=0;i<=9;++i){
        scanf("%d",arr+i);
    }
    scanf("%d",&m);
    for(i=1;i<=m;++i){
        trans(arr+0,10);
    }
    for(i=0;i<=9;++i){
        printf("%d ",*(arr+i));
    }
    return 0;
}*/
//以下是通过动态内存分配来模拟数组的写法
#include <stdio.h>
#include <stdlib.h>
void trans(int *arr,int n){
    int t=*(arr+n-1),i;
    for(i=n-1;i>0;--i){
        *(arr+i)=*(arr+i-1);
    }
    *arr=t;
}
int main(void){
    int* arr=(int*)malloc(sizeof(int)*10);
    if(arr==NULL){
        return 1;
    }int m,i;
    for(i=0;i<=9;++i){
        scanf("%d",arr+i);
    }
    scanf("%d",&m);
    for(i=1;i<=m;++i){
        trans(arr,10);
    }
    for(i=0;i<=9;++i){
        printf("%d ",*(arr+i));
    }
    free(arr);
    arr=NULL;
    return 0;
}