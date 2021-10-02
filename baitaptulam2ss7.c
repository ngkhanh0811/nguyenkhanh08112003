#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf("Nhap vao gia tri a : ");
	scanf("%d", &a);
	printf("\nNhap vao gia tri b : ");
	scanf("%d", &b);
	if(a*b>1000)
	printf("Tich a va b lon hon 1000 ");
	else 
	printf("Tich cua a va b nho hon 1000 ");
	return 0;
}
