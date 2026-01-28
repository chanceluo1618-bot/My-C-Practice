#include <stdio.h>
int main(){
    int i=10;
    for(i=10;i<15;i++){
        if(i*i>=100 && i*i<=200){
            printf("%d ",i*i);
        }
    }
    return 0;
}