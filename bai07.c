#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a; // ban kinh hinh tron
	float b; // canh hinh vuong
	float c; // chieu dai hinh chu nhat 
	float d; // chieu rong hinh chu nhat
	float x = 3.14;
	printf("Nhap vao ban kinh hinh tron : ");
	scanf("%f", &a);
	printf("Chu vi hinh tron la : %f", 2*x*a);
	printf("\nDien tich hinh tron la : %f", x*a*a);
	printf("\nNhap vao do dai canh hinh vuong : ");
	scanf("%f", &b);
	printf("\nChu vi hinh vuong la : %f", 4*b);
	printf("\nDien tich hinh vuong la : %f", b*b);
	printf("\nNhap vao chieu dai hinh chu nhat : ");
	scanf("%f", &c);
	printf("\nNhap vao chieu rong hinh chu nhat : ");
	scanf("%f", &d);
	printf("\nChu vi hinh chu nhat la : %f", (c+d)*2);
	printf("\nDien tich hinh chu nhat la : %f", c*d);
	return 0;
}
