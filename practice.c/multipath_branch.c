#include <stdio.h>
int main()
{
    int grade;
    scanf("%d",&grade);

    switch(grade){
        case 100:printf("very good\n");break;
        case 60:printf("good\n");break;
    }
    return 0;
}