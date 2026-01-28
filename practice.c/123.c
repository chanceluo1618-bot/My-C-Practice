#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int tranigal[n][n];
    for(i=0;i<n;i++){
        tranigal[i][0]=1;
        tranigal[i][i]=1;
        for(j=1;j<i;j++){
            tranigal[i][j]=tranigal[i-1][j-1]+tranigal[i-1][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d ",tranigal[i][j]);
        }
        printf("\n");
    }
    return 0;
}