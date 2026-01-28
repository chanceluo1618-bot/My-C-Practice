#include <stdio.h>
#include <stdlib.h>
int main(){
    int *heights;
    int *counts;
    int i, h, level;
    heights = (int *)malloc(20 * sizeof(int));
    counts = (int *)calloc(10, sizeof(int));
    for(i = 0; i < 20; i++){
        scanf("%d", heights + i);
    }
    for(i = 0; i < 20; i++){
        h = *(heights + i);
        if(h < 150){
            (*(counts + 0))++;
        }
        else if(h > 189){
            (*(counts + 9))++;
        }
        else{
            level = (h - 150) / 5;
            (*(counts + level + 1))++;
        }
    }
    for(i = 0; i < 10; i++){
        printf("%d %d\n", i + 1, *(counts + i));
    }
    free(heights);
    free(counts);
    return 0;
}