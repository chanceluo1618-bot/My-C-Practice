#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    switch (number)
    {
    case 1:printf("One\n");break;
    case 2:printf("Two\n");break;
    case 3:printf("Three\n");break;
    case 4:printf("Four\n");break;
    case 5:printf("five\n");break;
    case 6:printf("six\n");break;
    case 7:printf("seven\n");break;
    case 8:printf("Eight\n");break;
    case 9:printf("Nine\n");break;
    default:printf("Error\n");break;
    }
    return 0;
}