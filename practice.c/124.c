// #include <stdio.h>
// int votef( int* vote, int i ){
//     return vote[i];
// }
// void bubblesort( int* candidate, int* num ){
//     int i, j;
//     for( i = 0; i < 9; i++ ){
//         int swap = 0;
//         for( j = 0; j < 9 - i; j++ ){
//             if( candidate[j] > candidate[j+1] ){
//                 int temp1 = candidate[j];
//                 int temp2 = num[j];
//                 candidate[j] = candidate[j+1];
//                 num[j] = num[j+1];
//                 candidate[j+1] = temp1;
//                 num[j+1] = temp2;
//                 swap = 1;
//             }
//         }
//         if( !swap ) break;
//     }
// }
// int main(){
//     int candidate[10] = {0};
//     int vote[20];
//     int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int i;
//     for( i = 0; i < 20; i++ ){
//         scanf("%d", vote + i);
//     }
//     for( i = 0; i < 20; i++ ){
//         candidate[ votef(vote, i) - 1 ]++;
//     }
//     bubblesort(candidate, num);
//     for( i = 9; i >= 0; i-- ){
//         printf("%d %d\n", num[i], candidate[i]);
//     }
//     return 0;
//     // // 我的程序没问题，答案的输出有问题，所以我只能直接按答案输出了。
//     // printf("7 6\n");
//     // printf("5 3\n");
//     // printf("6 3\n");
//     // printf("1 2\n");
//     // printf("2 2\n");
//     // printf("3 2\n");
//     // printf("4 2\n");
//     // printf("8 0\n");
//     // printf("9 0\n");
//     // printf("10 0\n");
//     return 0;
// }


#include <stdio.h>
typedef struct{  //定义Candidate结构体，将候选人的ID和票数封装在一起
    int ID;
    int votes;
} Candidate;
Candidate candidates[10];   //定义候选人数组，数组的每个元素代表一个候选人，包含候选人的ID和票数
Candidate* p = candidates;  //指向候选人数组的指针
void bubblesort(){ //冒泡排序
    int i, j;
    for(i = 0; i < 10 - 1; i++){
        int swap = 0;
        for(j = 0; j < 10 - i - 1; j++){
            if((p + j) -> votes < (p + j + 1) -> votes){
                Candidate temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
                swap = 1;
            }
        }
        if(!swap) break;
    }
}
int main(){
    int vote;
    int i;
    for(i = 0; i<10; i++){  //初始化候选人ID
        (p + i) -> ID = i + 1;
    }
    for(i = 0; i < 20; i++){
        scanf("%d", &vote);
        (p + vote - 1) -> votes++;
    }
    bubblesort();   //将候选人按得票数从高到低排序
    for(i = 0; i < 10; i++){
        printf("%d %d\n", (p + i) -> ID, (p + i) -> votes);
    }
    return 0;
}