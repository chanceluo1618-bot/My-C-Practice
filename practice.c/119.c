#include <stdio.h>

int main() {
    int matrix[3][4];
    int arr[12];
    int index = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[index] = matrix[i][j];
            index++;
        }
    }

    for (int i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}