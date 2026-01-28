#include <stdio.h>
#include <stdio.h>
int main(){
    char str[11];
    fgets(str,sizeof(str),stdin);
    char aim;
    scanf(" %c", &aim);
    int i=0,j=0;
    char* p=strchr(str,'\n');
    *p='\0';
    while ( str[i] != '\0' ){
    if( str[i] != aim ){
        str[j++] = str[i];
    }
    i++;
    }
    str[j] = '\0';
    printf("%s", str);
    return 0;
}