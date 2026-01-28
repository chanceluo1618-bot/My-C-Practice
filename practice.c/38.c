#include <stdio.h>
int main(){
    char c;
    int letter=0,number=0,other=0;
    c=getchar();
    while(c!='\n'){
        if(c>='A'&& c<='z'){
            letter++;
        }
        else if(c>='0' && c<='9'){
            number++;
        }
        else{
            other++;
        }c=getchar();
    }
    printf("%d %d %d\n",letter,number,other);
    return 0;
}