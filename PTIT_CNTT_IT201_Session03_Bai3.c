#include <stdio.h>
#include <stdlib.h>

float evenAver(int arr[], int n) {
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
            count++;
        }
    }
    if (count == 0) return 0;
    return (float)sum / count;
}

int main() {
    int n;
    int *arr;

    printf("Nhap so phan tu cua mang : ");
    scanf("%d", &n);

    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu phai nam trong khoang (0, 1000)\n");
        return 1;
    }

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

    }

    float answer = evenAver(arr, n);
    if (answer == 0) {
        printf("Khong co so chan nao trong mang.\n");
    } else {
        printf("Trung binh cong cac so chan trong mang la: %.2f\n", answer);
    }

    free(arr);
    return 0;
}
