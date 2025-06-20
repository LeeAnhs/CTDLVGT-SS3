#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    printf("Nhap so phan tu cua mang (0 < n < 1000): ");
    scanf("%d", &n);
    if (n < 0 ){
        printf("So luong phan tu khong duoc am\n");
    } else if (n == 0) {
        printf("So luong phan tu phai lon hon 0\n");
        return 1;
    } else {
         arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0 || arr[i] > 100) {
            printf("Gia tri khong hop le\n");
            i--;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("So phan tu thu %d la: %d\n", i + 1, arr[i]);
    }
    }
   
    free(arr);
    return 0;
}
