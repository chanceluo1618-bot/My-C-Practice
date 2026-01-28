#include <stdio.h>
int main(){
    int M[3][4];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&M[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    return 0;
}