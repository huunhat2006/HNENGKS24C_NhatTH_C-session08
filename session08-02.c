#include <stdio.h>

int main()
{
	int arr[5]={20,5,31,10,66};
	int i,num;
	int n=-1; 
	printf("Moi ban nhap so:");
	scanf("%d",&num);
	for (i = 0; i <+4; i++){
        if (arr[i] == num){
            n = i;
            break;
	}
}
		if(n!=-1){
			printf("Ban nhap dung roi no o vi tri thu:%d\n",n+1);
		}
		else{
			printf("So ban nhap khong nam trong mang\n"); 
	} 
	
	return 0;

 }

