#include <stdio.h>
int main(){
    int m,n,i,j;
    int imax,jmax;
    scanf("%d %d", &m, &n);
    int A[m][n];
    int max=A[0][0]=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
            if(A[i][j]>max){
                max=A[i][j];
                imax=i;
                jmax=j;
            }
        }
    }
    printf("%d %d %d\n", max,imax,jmax);
    return 0;
}