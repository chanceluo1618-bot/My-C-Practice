#include <stdio.h>
int main(){
    float float1,float2;
    int integer;
    char ch;

    scanf("%f %d %c %f",&float1,&integer,&ch,&float2);
    printf("%c %d %.2f %.2f\n",ch,integer,float1,float2);

    return 0;
}