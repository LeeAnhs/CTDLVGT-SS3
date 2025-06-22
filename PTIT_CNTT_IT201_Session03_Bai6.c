#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    int *arr = NULL;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);
    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le\n");
        return 1;
    }
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap so luong phan tu muon them m: ");
    scanf("%d", &m);
    if (m < 0) m = 0; 

    if (m > 0) {
        int *temp = (int*)realloc(arr, (n + m) * sizeof(int));
        if (temp == NULL) {
            printf("Khong the cap phat bo nho!\n");
            free(arr);
            return 1;
        }
        arr = temp;
        printf("Nhap cac phan tu muon them:\n");
        for (int i = n; i < n + m; i++) {
            scanf("%d", &arr[i]);
        }
        n += m;
    }
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1){
            printf(" ");
        } else {
            printf("\n");
        }
        
    }
    free(arr);
    return 0;
}