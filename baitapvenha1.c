#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x = 4;
	int y = 3;
	printf ("Gia tri cua x va y, %d & %d\n", x, y);
	printf("Tong = ,%d\n", x + y);
	printf("Hieu = ,%d\n", x - y);
	printf("Tich = ,%d\n", x * y);
	printf("Thuong = ,%f\n", x / y);
	getch();
}
