#include <stdio.h>
#include <string.h>
int main(){
    char str1[100];
    char str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    int cmp = strcmp( str1, str2);
    if (cmp < 0 ) printf("-1\n");
    else if( cmp == 0 ) printf("0\n");
    else printf("1");
    return 0;
}