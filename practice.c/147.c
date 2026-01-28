#include <stdio.h>
#include <string.h>
int main(){
    int i, j;
    char str[120];
    int ispalindrome = 1;
    scanf( " %s ", str);
    int len = strlen(str);
    for( i = 0, j = len - 1; i < j; i++, j--){
        if(str[i] != str[j] ){
            ispalindrome = 0;
            break;
        }
    }
    if( ispalindrome )printf("Yes\n");
    else printf("No\n");
    return 0;
}