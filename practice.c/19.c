#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x%3==0){
        if(x%5==0){if(x%7==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        }else{
            printf("NO\n");

        }
    }else{
        printf("NO\n");
    }
    return 0;
}
