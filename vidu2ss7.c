#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int year;
	printf("Nhap vao so nam bat ki ");
	scanf("%d",& year);
	if (year % 4 == 0 && year %100 != 0|| year % 400 == 0)
	printf("\n Do la nam nhuan !");
	return 0;
}
