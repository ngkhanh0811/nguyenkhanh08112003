#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float main(float argc, char *argv[]) {
	float a;
	float b;
	float c;
	printf ("Nhap diem mon Toan ");
	scanf("%f", &a);
	printf ("Nhap diem mon Van ");
	scanf("%f", &b);
	printf ("Nhap diem mon Tieng Anh ");
	scanf("%f", &c);
	printf("Diem trung binh 3 mon Toan Van Anh %f", (a+b+c)/3);
	printf("\nTong diem 3 mon Toan Van Anh %f", a+b+c);
	return 0;
}
