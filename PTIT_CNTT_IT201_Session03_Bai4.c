#include <stdio.h>
#include <stdlib.h>

void findMaxMin(int **arr, int rows, int cols, int *max, int *min) {
    *max = arr[0][0];
    *min = arr[0][0];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > *max) {
                *max = arr[i][j];
            }
            if (arr[i][j] < *min) {
                *min = arr[i][j];
            }
        }
    }
}
int main() {
    int rows, cols;
    
    printf("Nhap so hang (0 < rows < 1000): ");
    scanf("%d", &rows);
    if (rows <= 0 || rows >= 1000) {
        printf("So hang khong hop le.\n");
        return 1;
    }
    
    printf("Nhap so cot (0 < cols < 1000): ");
    scanf("%d", &cols);
    if (cols <= 0 || cols >= 1000) {
        printf("So cot khong hop le\n");
        return 1;
    }
    
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }
    
    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int max, min;
    findMaxMin(arr, rows, cols, &max, &min);
    
    printf("So lon nhat trong mang: %d\n", max);
    printf("So nho nhat trong mang: %d\n", min);
    
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}








