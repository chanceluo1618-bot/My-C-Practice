#include <stdio.h>
long long decom(long long *x){
    char ret=0;
    while (*x>0)
    {   ret=*x%10;
        *x/=10;
        return ret;
    }
}
long long mult(char x){
    long long retmult=1;
    retmult*=x;
    return retmult;
}
int main(){
    long long num;
    long long *p=&num;
    long long multi=1;
    scanf("%lld",&num);
    printf("%lld ",num);
    while (multi>0)
    {   while (*p>0)
        {   multi*=mult(decom(&num));
        }
        printf("%lld ",multi);
        num=multi;
        if(multi<10)break;
        multi=1;
    }
    return 0;
}