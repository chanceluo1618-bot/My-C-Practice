#include <stdio.h>
int main() {
    int arr[10];
    int matrix[3][4];
    int i, j, index;
    for(i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
    index = 0;
    for(j=0; j<4; j++) {
        for(i=0; i<3; i++) {
            if(index < 10) {
                matrix[i][j] = arr[index];
                index++;
            } else {
                matrix[i][j] = 0;
            }
        }
    }
    for(i=0; i<3; i++) {
        for(j=0; j<4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}