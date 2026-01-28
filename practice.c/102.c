#include <stdio.h>
int recursion(int* arr,int target){
    int left=0,right=7;
    int mid;
    while (left<=right)
    {   mid=(left+right)/2;
        if(arr[mid]==target){
        break;
        }else if(arr[mid]<target)left+=1;
        else if(arr[mid]>target)right-=1;
    }
    if(left>right)mid=-1;
    return mid;
}
int main(void){
    int arr[8]={46,52,68,71,74,83,87,95};
    int target=0;
    scanf("%d",&target);
    int pos=recursion(arr,target)+1;
    if(pos==0)printf("No\n");
    else printf("%d\n",pos);
    return 0;
}