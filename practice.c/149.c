#include <stdio.h>
#include <string.h>
int main(){
    char str1[6];
    char str2[6];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    int i=0;
    while(str1[i]!='\0'){
        i++;
    }
    //str1[i]=' ';
    strcpy(str1+i+1,str2);
    printf("%s",str1);
    printf("happy\n");
    return 0;
}