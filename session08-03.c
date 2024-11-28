#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao 1 so de tao ma tra so nho thoi nha: ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu vao [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMa tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

