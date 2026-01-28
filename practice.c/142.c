#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int M[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&M[i][j]);
        }
    }int is;
    for(i=0;i<n;i++){
        is=0;
        for(j=0;j<n;j++){
            if(M[i][j]!=M[j][i])is=1;break;
        }
    }
    if(is)printf("No\n");
    else printf("Yes\n");
    return 0;
}