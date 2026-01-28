#include <stdio.h>
#include <math.h>
int main(){
    int i=0;
    for(i=0;i<=10000;i++){
        int a=(int)sqrt(i+100);
        if(a*a!=i+100){
            continue;}
            int b=(int)sqrt(i+268);
            if(b*b==i+268){
                printf("%d ",i);
            }
        }
        return 0;
    }