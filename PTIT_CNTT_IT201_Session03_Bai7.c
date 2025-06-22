#include <stdio.h>
#include <stdlib.h>

int sumRow(int *rowArr, int col) {
    int sum = 0;
    for (int i = 0; i < col; i++) {
        sum += rowArr[i];
    }
    return sum;
}

int main() {
    int rows, cols, k;

    printf("Nhap so hang (0 < rows < 1000): ");
    scanf("%d", &rows);
    if (rows <= 0 || rows >= 1000) {
        printf("So hang khong hop le\n");
        return 1;
    }

    printf("Nhap so cot (0 < cols < 1000): ");
    scanf("%d", &cols);
    if (cols <= 0 || cols >= 1000) {
        printf("So cot khong hop le\n");
        return 1;
    }

    int **arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL) {
        printf("khong the cap phat bo nho that bai\n");
        return 1;
    }
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL) {
            printf("khong the cap phat bo nho that bai\n");
            for (int j = 0; j < i; j++) free(arr[j]);
            free(arr);
            return 1;
        }
    }

    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Nhap chi so hang can tinh tong (bat dau tu 1): ");
    scanf("%d", &k);
    if (k < 1 || k > rows) {
        printf("hang tinh tong khong ton tai\n");
        for (int i = 0; i < rows; i++) free(arr[i]);
        free(arr);
        return 1;
    }

    printf("Tong cac phan tu tren hang %d la: %d\n", k, sumRow(arr[k - 1], cols));

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}