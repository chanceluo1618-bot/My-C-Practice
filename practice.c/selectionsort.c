// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     int i,j;
//     for(i=0;i<n;i++){
//         scanf("%d",a+i);
//     }
//     for(i=0;i<n-1;i++){
//         int indexmax=i;
//         for(j=i+1;j<n;j++){
//             if(a[j]>a[indexmax])indexmax=j;
//         }
//         if(indexmax!=i){
//             int temp=a[indexmax];
//             a[indexmax]=a[i];
//             a[i]=temp;
//         }
//     }
//     for(i=0;i<n;i++){
//         printf("%d%c",a[i],i==n-1 ? '\n' : ' ');
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     int i,j;
//     for(i=0;i<n;i++){
//         scanf("%d",a+i);
//     }
//     for(i=0;i<n-1;i++){
//         int maxindex=i;
//         for(j=i+1;j<n;j++){
//             if(a[j]>a[maxindex])maxindex=j;
//         }
//         if(maxindex!=i){
//             int temp=a[i];
//             a[i]=a[maxindex];
//             a[maxindex]=temp;
//         }
//     }
//     for(i=0;i<n;i++){
//         printf("%d%c",a[i],i==n-1 ? '\n' : ' ');
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     int i,j;
//     for(i=0;i<n-1;i++){
//         int maxindex=i;
//         for(j=i;j<n;j++){
//             if(a[j]>a[maxindex])maxindex=j;
//         }
//         if(maxindex!=i){
//             int temp=a[i];
//             a[i]=a[maxindex];
//             a[maxindex]=temp;
//         }
//     }
//     for(i=0;i<n;i++){
//         printf("%d%c",a[i],i==n-1 ? '\n' : ' ');
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d",a+i);
    }
    for(i=0;i<n-1;i++){
        int maxindex=a[i];
        for(j=i+1;j<n;j++){
            if(a[j]>a[maxindex])maxindex=j;
        }
        if(i!=maxindex){
            int temp=a[i];
            a[i]=a[maxindex];
            a[maxindex]=temp;
        }
    }
    for(i=0;i<n;i++){
        printf("%d%c",a[i],i==n-1 ? '\n' : ' ');
    }
    return 0;
}