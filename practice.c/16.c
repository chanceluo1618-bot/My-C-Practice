#include <stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    if(x<0){
        x=-x;
    }else{
        x=x;
    }printf("%.2f\n",x);
    return 0;


}