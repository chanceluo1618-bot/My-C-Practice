#include <stdio.h>
int main(){
    int count[26]={0};
    char str[120];
    fgets(str,sizeof(str),stdin);
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            int index=str[i]-'A';
            count[index]++;
        }
        else if(str[i]>='a' && str[i]<='z'){
            int index=str[i]-'A'-32;
            count[index]++;
        }
    }
    for(i='A';i<='Z';i++){
        if(count[i-'A']!=0){
            printf("%c %d\n",i,count[i-'A']);
        }
    }
    return 0;
}