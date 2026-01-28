#include <stdio.h>
int main(){
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    if (c>a){if(a>b){
        printf("%d %d %d\n",b,a,c);
    }else{
        printf("%d %d %d\n",a,b,c);
    }

    }
        else{
        if(a>c){
            printf("%d %d %d\n",c,a,b);
        }else{
            printf("%d %d %d\n",a,c,b);
        }
    }
    return 0;
}