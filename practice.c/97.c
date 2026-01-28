#include <stdio.h>
#include <string.h>
int des(int* arr,int num){
    int i,des=8;
    for(i=0;i<8;i++){
        if(arr[i]>num){
            des=i;
            break;
        }
    }
    return des;
}
int main(void){
    int num,arr[8],newarr[9],i;
    for(i=0;i<8;i++){
        scanf("%d",arr+i);
    }
    scanf("%d",&num);
    int pos=des(arr,num);
    memcpy(newarr,arr,pos*sizeof(int));
    newarr[pos]=num;
    memcpy(newarr+pos+1,arr+pos,(8-pos)*sizeof(int));
    for(i=0;i<=8;i++){
        printf("%d ",newarr[i]);
    }
    return 0;
}