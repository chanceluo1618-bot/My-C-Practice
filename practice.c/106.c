#include <stdio.h>
#include <string.h>
int main(){
    char binary[120];
    int decimal=0,i;
    scanf("%s",binary);
    for(i=0;i<strlen(binary);i++){
        decimal=decimal*2+binary[i]-'0';
    }
    printf("%d\n",decimal);
    return 0;
}