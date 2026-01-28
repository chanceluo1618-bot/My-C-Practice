#include <stdio.h>

int main()
{
    int cm=0;
    scanf("%d",&cm);

    int foot=cm/30.48;
    double inch=((cm/30.48)-foot)*12;

    printf("%d英尺 %f英寸\n",foot,inch);
   
    return 0;


}