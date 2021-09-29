#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float top;
	float bottom;
	float height;
	printf("Nhap vao chieu cao cua hinh thang : ");
	scanf("%f", &height);
	printf("Nhap vao do dai day tren cua hinh thang : ");
	scanf("%f", &top);
	printf("Nhap vao do dai day duoi cua hinh thang : ");
	scanf("%f", &bottom);
	printf("Dien tich cua hinh thang la : %f", (top+bottom)*height/2);
	return 0;
}
