#include <stdio.h>
int main(){
   int x=0,y=0,z=0;
   for(x=0;x<15;x++){
    for(y=0;y<30;y++){
        z=100-x-y;
        if(z%3==0 && 5*x+3*y+z/3==100){
            printf("%d %d %d\n",x,y,z);
        }
    }
   }
   return 0;
}