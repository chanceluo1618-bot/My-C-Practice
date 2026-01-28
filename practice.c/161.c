#include <stdio.h>
#include <string.h>
int main(){
    char strnum[100]="'\0'",strletter[100]="'\0'";
    char str[200];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0,j=0,k;
    for(k=0;str[k]!='\0';k++){
        if(str[k]>='A' && str[k]<='z'){
            strletter[i]=str[k];
            i++;
        }
        else if(str[k]>='0' && str[k]<='9'){
            strnum[j]=str[k];
            j++;
        }
    }
    printf("%s\n",strletter);
    printf("%s\n",strnum);
    return 0;
}