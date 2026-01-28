#include <stdio.h>
int main(){
    float price,final_price=0;
    scanf("%f",&price);
    if(price>100){
        final_price=(price-100)*0.8+90;
    }else{
        final_price=price*0.9;
    }
    printf("%.2f\n",final_price);
    return 0;
}