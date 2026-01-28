/*#include <stdio.h>
int sum(int begin,int end)
{   int i=0,sum=0;
    for(i=begin;i<=end;i++){
        sum+=i;
    }return sum;
}
int main(){
    int begin,end;
    scanf("%d %d",&begin,&end);
    sum(begin,end);
    printf("%d\n",sum(begin,end));
    return 0;
}*/
/*#include <stdio.h>
void cheer(int a)
{
printf("%d\n",a);
}
int main(){
    double a=2.444;
    cheer(a);
    return 0;
}*/   /*      
#include <stdio.h>
int main(void){
    int i=0,x;
    int count[10];
    for(i=0;i<10;i++){
        count[i]=0;
    }
    scanf("%d",&x);
    while (x!=-1)
    {if(x>=0 && x<=9){
        count[x]++;
    }scanf("%d",&x);
    }
    for(i=0;i<10;i++){
        printf("%d\n",count[i]);
    }
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
// #include <stdio.h>
// int main(){
//     int m,n;
//     scanf("%d %d",&m,&n);
//     int A[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&A[i][j]);
//         }
//     }
//     int p,q;
//     scanf("%d %d",&p,&q);
//     if(n!=p){
//         printf("Error\n");
//         return 0;
//     }
//     int B[p][q];
//     for(int i=0;i<p;i++){
//         for(int j=0;j<q;j++){
//             scanf("%d",&B[i][j]);
//         }
//     }
//     //定义矩阵C=AB；（m*q)
//     int C[m][q];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             C[i][j]=0;
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             for(int k=0;k<n;k++){
//                 C[i][j]+=A[i][k]*B[k][j];
//             }
//         }
//     }
//     for(int i=0;i<m;i++){
//         printf("[");
//         for(int j=0;j<q;j++){
//             printf("%d",C[i][j]);
//             if(j<q-1){
//                 printf(" ");
//             }
//         }printf("]\n");
//     }
//     return 0;
// }
/*#include <stdio.h>
int main(){
    double a=1,b=1;
    for(int i=1;i<=20;i++){
        a=a+b;
        b=a+b;;
        printf("%.0f %.0f\n",a,b);
    }
    return 0;
}*/
//#include <stdio.h>
/*int i;
int isprime(int m){
    for(i=2;i<m;i++){
        if(m%i==0){
            break;
        }
    }
        if(i==m){
            return 1;
        }else{
            return 0;
        }
    
}
int main(){
    int isprime(int m);
    int j;
    for(j=101;j<=200;j++){
        if(isprime(j)){
            printf("%d ",j);
        }
    }
}*/
/*#include <stdio.h>
int main(){
    int a[2];
    printf("%p",&a);
}*/
/*#include <stdio.h>
void minmax(int a[],int len,int *min,int *max);
int main(){
    int a[]={1,2,3,4,6,3,5,8,1,9};
    int min,max;
    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
    printf("%d %d\n",min,max);
    return 0;
}
    void minmax(int a[],int len,int *min,int *max){
        //int i;
        *min=*max=a[0];
        for(int i=0;i<len;i++){
            if(a[i]<*min){
                *min=a[i];
            }
            if(a[i]>*max){
                *max=a[i];
            }
        }
    }*/
   /*#include <stdio.h>
   void minmax(int a[],int len,int *min,int *max);
   int main(){
    int a[]={1,6,4,7,3,8,3,7,9,11,2,67,43,55,76};
    int min,max;
    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
    printf("%d %d\n",min,max);
    return 0;
   }
   void minmax(int a[],int len,int *min,int *max){
    int i;
    *min=*max=a[0];
    for(i=0;i<len;i++){
        if(a[i]<*min){
            *min=a[i];
        }
        if(a[i]>*max){
            *max=a[i];
        }
    }
   }*/
  
  /*#include <stdio.h>
  void minmax(int *a,int len,int *min,int *max){
    *min=*max=a[0];
    for(int i=0;i<len;i++){
        if(a[i]<*min){
            *min=a[i];
        }
        if(a[i]>*max){
            *max=a[i];
        }
    }
  }
  int main(){
    int a[]={1,3,5,3,6,2,6,1,8,2,1};
    int min,max;
    minmax(a,sizeof(a)/sizeof(0),&min,&max);//传入数组的第一个元素的位置以代表整个数组，这样可以节约性能
    printf("min=%d max=%d\n",min,max);
  }*/
 /*#include <stdio.h>
 int is(int a,int b,int *c){
    int ret;
    if(b==0)ret=0;
    else{ret=1;
        *c=a/b;
    }
    return ret;
 }
 int main(){
    int a=2,b=2,c;
    if(is(a,b,&c)){
        printf("%d\n",c);
    }
 }*/
/*#include <stdio.h>
int is(int a,int b,int c){
    int ret=0;
    if(a*a*a+b*b*b+c*c*c==a*100+b*10+c){
        ret=1;
    }return ret;
    
}
int main(){
    int a,b,c;
    for(int i=100;i<1000;i++){
        a=i/100;
        b=(i%100)/10;
        c=((i%100)%10);
        if(is(a,b,c)){
            printf("%d ",i);
        }
    }
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=2;i<=a;i++)
        while (a%i==0)
        {printf("%d ",i);
            a=a/i;
        }
        return 0;
    }*/
/*#include <stdio.h>
void maxcomdiv(int *a,int *b){
    while(*b!=0){
        int r=*a%*b;
        *a=*b;
        *b=r;
    }
    }
void mincommul(int *a,int *m,int *n){
    *m=*m**n/(*a);
    }
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int m=a,n=b;
    maxcomdiv(&a,&b);
    mincommul(&a,&m,&n);
    printf("%d %d\n",a,m);
    return 0;
}*/
/*#include <stdio.h>
int main(){
    char c;
    int letter=0,munber=0,space=0,other=0;
    c=getchar();
    while (c!='\n')
    {if(c>='A' && c<='z'){
        letter++;
    }else if(c>='0' && c<='9'){
        munber++;
    }else if(c==' '){
        space++;
    }else{
        other++;
    }
    }
    printf("字母=%d 数字=%d 空格=%d 其他=%d\n",letter,munber,space,other);
    return 0;
}*/
/*#include <stdio.h>
void func(int *x,int *y){
    int cup=*x;
    *x=*y;
    *y=cup;
}
int main(){
    int a=10;
    int b=5;
    func(&a,&b);
    printf("%d %d",a,b);
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main(void){
    void *p;
    int cnt=0;
    while ((p=malloc(1024*1024*100)))
    {cnt++;
    }printf("%d",cnt);
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[]={1,2,3,6,};
    int *p1=&a[1],*p2=&a[3];
    printf("%ld",p2-p1);
}*/
// #include <stdio.h>
// int main(){
//     int a=0;
//     a++;
//     a++;
//     a++;
//     a++;
//     return 0;
// }
//#include <stdio.h>
//int main(){
    //char str1[]="Hello, World!";
    // printf("%s\n", str1);
    // char str2[]="Hello, World!";
    // printf("%s\n", str2);
    // char* str3="Hello, World!";
    // printf("%c\n", *(str3+5));
    //*(str1+2)='X';
    // printf("%s\n", str1+1);
//     printf("!");
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     for(int i=0;i<10;i++){
//         printf("%d ",*(arr+i));
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
    // int a=1,b=2;
    // void* arr[]={&a,&b};
    // for(int i=0;i<2;i++){
    //     printf("%p ",arr[i]);
    // }
    // return 0;
    //char* str[]={"Hello, World!","Hello C","Hello,Kunchen"};
    // for(int i=0;i<3;i++){
    //     printf("%s\n",str[i]);
    // }
//     printf("%s\n",*(str+1));
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     char str[3][15]={"Hello, World!","Hello C","Hello,Kunchen"};
//     for(int i=0;i<3;i++){
//         printf("%s\n",str[i]);
//     }
//     return 0;
// }
