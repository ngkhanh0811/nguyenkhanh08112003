#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float toan;
	float ly;
	float hoa;
	printf("Nhap vao diem Toan cua ban : ");
	scanf("%f", &toan);
	printf("Nhap vao diem Ly cua ban : ");
	scanf("%f", &ly);
	printf("Nhap vao diem Hoa cua ban : ");
	scanf("%f", &hoa);
	printf("Tong diem ba mon Toan Ly Hoa la : %f", toan+ly+hoa);
	printf("\nDiem trung binh ba mon Toan Ly Hoa la : %f", (toan+ly+hoa)/3);
	return 0;
}
