#include <stdio.h>
int main(){
    char c;
    char c1,c2;
    scanf("%c",&c);
    if(c=='a'){
        c1='z';
        c2='b';
    }else if(c=='z'){
        c1='y';
        c2='a';
    }
    else{
        c1=c-1;
        c2=c+1;
    }
    printf("%c %c\n",c1,c2);
    return 0;
}