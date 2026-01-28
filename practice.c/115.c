#include <stdio.h>
int main() {
    int N,I,J;
    int row,col;
    scanf("%d %d %d",&N,&I,&J);
    for(col=1;col<=N;col++) {
        printf("(%d,%d)",I,col);
    }
    printf("\n");
    for(row=1;row<=N;row++) {
        printf("(%d,%d)",row,J);
    }
    printf("\n");
    for(row=1;row<=N;row++) {
        for(col=1;col<=N;col++) {
            if(row-col==I-J){ 
                printf("(%d,%d)",row,col);
                break; 
            }
        }
    }
    printf("\n");
    for (row=1;row<=N;row++) {
        for(col=1;col<=N;col++) {
            if(row+col==I+J){ 
                printf("(%d,%d)",col,row);
                break; 
            }
        }
    }
    printf("\n");
    return 0;
}