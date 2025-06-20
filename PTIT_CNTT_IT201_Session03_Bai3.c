#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,sum=0;
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
    for (int i = 1; i < n; i++) {
        if (arr[i] % 2 ==0){
              sum += arr[i];
        }
    }
    printf("Trung binh cong cac so chan trong mang la: %.2f\n", (float)sum / n);
    free(arr);
    return 0;
}
}
   