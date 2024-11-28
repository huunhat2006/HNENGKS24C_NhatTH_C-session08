#include <stdio.h>

int main() {

    int arr[3][3] = {
        {20, 5, 6},
        {31, 10, 8},
        {51, 15, 14}
    };
    int rows = 0, cols = 0;
    int total = 0;

    for (int i = 0; i <=2; i++) {
     
            printf("Cac phan tu cua tich cheo chinh la:%d \n",arr[i][i]);
            total = total + arr[i][i]; 
		
	}
	printf("Tong cac phan tu la:%d",total);
	return 0;
}
	 
	
