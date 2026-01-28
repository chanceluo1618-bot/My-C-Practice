#include <stdio.h>
#include <string.h>
int main(){
    int n,i;
     scanf("%d",&n);
    int arr[n],newarr[n];
    int left1,right1,left2,right2;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&left1,&right1);
    scanf("%d %d",&left2,&right2);
    memcpy(newarr,arr,(left1-1)*sizeof(int));
    memcpy(newarr+left1-1,arr+left2-1,(right1-left1+1)*sizeof(int));
    memcpy(newarr+right1,arr+right1,(left2-right1-1)*sizeof(int));
    memcpy(newarr+left2-1,arr+left1-1,(right2-left2+1)*sizeof(int));
    memcpy(newarr+right2,arr+right2,(n-right2)*sizeof(int));
    for(i=0;i<n;i++){
        printf("%d ",newarr[i]);
    }
    return 0;
}