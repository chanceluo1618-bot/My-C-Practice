/*#include <stdio.h>
int main(){
    int i=800;
    int sum=0;
    for(i=800;i<=900;i+=2){
        sum=sum+i;
    }
    printf("%d",sum);
}*/
#include <stdio.h>
int main(){
    int x=1,sum=0;
    for(x=1;x<=100;x++){
        sum=x*x+sum;
    } 
    printf("%d",sum);
    return 0;
}