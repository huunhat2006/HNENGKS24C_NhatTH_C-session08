#include <stdio.h>

int main() {

    int arr[3][3] = {
        {20, 5, 6},
        {31, 10, 8},
        {51, 15, 14}
    };
    int rows = 3, cols = 3;

    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    printf("Phan tu lon nhat la: %d\n", max);

    return 0;
}

