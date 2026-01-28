/*#include <stdio.h>
int main(){
    int a[10];
    int i;
    for(i=1;i<=10;++i){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=10;i++){
        printf("%d ",a[i]);
        if(i==4 || i==8){
            printf("\n");
        }
    }
    return 0;
}*/
/*#include <stdio.h>
int main(){
    double salary[10];
    int number[10];
    int i,sum=0;
    for(i=1;i<=10;++i){
        scanf("%d %lf",&number[i],&salary[i]);
        sum+=salary[i];
    }
    double average=1.0*sum/10;
    printf("%.2f\n",average);
    for(i=1;i<=10;++i){
        if(salary[i]<average){
            printf("%d %.2f\n",number[i],salary[i]);
        }
    }
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int a[10],i;
    for(i=9;i>=0;--i){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;++i){
        printf("%d ",a[i]);
    }
    return 0;
}*/
#include <stdio.h>
int main(){
    int a[10];
    int i;
    for(i=0;i<10;++i){
        scanf("%d",&a[i]);
    }
    int t=a[9];
    for(i=9;i>0;--i){
        a[i]=a[i-1];
    }
    a[0]=t;
    for(i=0;i<=9;++i){
        printf("%d ",a[i]);
    }
    return 0;
}