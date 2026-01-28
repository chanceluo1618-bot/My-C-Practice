#include <stdio.h>
int main(){
    int a=1,b=1,c=1,i=0;
    for(a=1;a<=4;a++){
        for(b=1;b<=4;b++){
            for(c=1;c<=4;c++){
                if(a!=b && b!=c && a!=c){
                    printf("%d ",a*100+b*10+c);
                    i++;
                    if(i%6==0){
                        printf("\n");
                    }
                }
            }
        }
    }
    return 0;
}