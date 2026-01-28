#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    int p,q;
    scanf("%d %d",&p,&q);
    if(n!=p){
        printf("Error\n");
        return 0;
    }
    int B[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&B[i][j]);
        }
    }
    //定义矩阵C=AB；（m*q)
    int C[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            C[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<n;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        //printf("[");
        for(int j=0;j<q;j++){
            printf("%d",C[i][j]);
            if(j<q-1){
                printf(" ");
            }
        }//printf("]\n");
    }
    return 0;
}