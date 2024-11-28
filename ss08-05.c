#include <stdio.h> 

int main() {

    int arr[3][3] = {
        {20, 5, 6},
        {31, 10, 8},
        {51, 15, 14}
    };
    int rows = 3, cols = 3;
    int total = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                total += arr[i][j];
            }
        }
    }
    printf("Tong cac phan tu tren duong bien ta: %d\n", total);

    return 0;
}

