#include <stdio.h>
void countoff(int* kits){
    int count=1,i,left=12;
    for(i=1;;++i){
        if(i==12)i=1;
        if(*(kits+i-1)!=0)count++;
        if(count==7){
            left--;
            *(kits+i-1)=0;
            count=1;
        }
        if(left==1)break;
    }
}
void find(int* kits){
    int i,ret;
    for(i=1;i<=12;++i){
        if(*(kits+i-1)==1)printf("%d",i);
    }
}
int main(void){
    int kits[12]={1,1,1,1,1,1,1,1,1,1,1,1};
    countoff(kits);
    find(kits);
    return 0;
}