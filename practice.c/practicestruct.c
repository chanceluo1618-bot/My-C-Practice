#include <stdio.h>
// struct studentgrades{
//     int Chinese;
//     int English;
//     int math;
// };
// struct team{
//     struct studentgrades g1;
//     struct studentgrades g2;

// };
// int main(){
//     struct team t1,t2;
//     t1.g1.Chinese=110;
//     printf("%d\n",t1.g1.Chinese);
//     t1.g1=(struct studentgrades){110,140,135};
//     t2.g2=t1.g1;
//     printf("%d %d %d\n",t2.g2.Chinese,t2.g2.English,t2.g2.math);
//     struct team* p1=&t1;
//     printf("%d %d %d\n",p1->g1.Chinese,p1->g1.English,p1->g1.math);  
// }
// #include <stdio.h>
// struct point{
//     int x;
//     int y;
// };
// struct line{
//     struct point A;
//     struct point B;
// };
// struct line L[4];
// int f(void){
//     int i=2;
//     return i;
// }
// int main(){
//     // struct line L[4];
//     // scanf("%d",&(L+1)->A.x);
//     // printf("%d",(L+1)->A.x);
//     int i=f();
//     printf("%s %d\n",__func__,i);
// }
// #include <stdio.h>
// int* fp(int* p){
//     return p;
// }
// int main(){
//     int a;
//     int* p=fp(&a);
//     printf("%p\n",p);
//     return 0;
// }
// #include <stdio.h>
// char* f(char* str){
//     *(str+3)='e';
//     return str;
// }
// int main(){
//     char str1[10]="abcd";
//     //char* str2=f(str1);
//     char* str2=str1;
//     printf("%s",str2);
// }
// #include <stdio.h>
// int main(){
//     char* p;
//     p="string";
//     char str[10];
    //str="string";
//    printf("%s",p);
    //printf("%s",str);
//}

#include <stdio.h>
int main(){
    // char a='+';
    // printf("%c\n",a);
    // char str1[]={'s','t','r','i','n','g','\0'};
    // char* str2="string";
    // printf("%s\n",str1);
    // printf("%s\n",str2);
    // printf("%lu",sizeof(long));
    // char str[4][5]={"abc","def","ghi"};
    char* p;
    p="string";
    char str[10];
    //str="string";
    printf("%s",p);
    
}