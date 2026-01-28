#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){  //参数类型是const void* 保证通用性与安全性
    int* p1 = (int*)a;  //记得强制类型转换
    int* p2 = (int*)b;
    return *p1 - *p2;   //a要排在b的前面则返回负数，反之则返回正数，相等则返回0
}
int main(){
    int arr[] = {5, 3, 7, 10, 17, 12, 13, 8};
    int num = sizeof(arr) / sizeof(int);
    int (*pf)(const void*, const void*) = compare;  // 定义函数指针，函数指针的类型要与函数的返回类型和参数类型一致
    qsort(arr, num, sizeof(int), pf);  //要传入4个参数，依次是排序的起始位置，要排序的个数，每个元素占多少字节，和比较函数的指针
    for(int i = 0; i < num; i++){
        printf("%d ", *(arr + i));
    }
    printf("\n");
    return 0;
}