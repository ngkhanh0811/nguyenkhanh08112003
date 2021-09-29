#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
    printf("Nhap so thu nhat : ");
    scanf("%d", &x);
    printf("Nhap so thu hai : ");
    scanf("%d", &y);
	printf ("Hai so nguyen la : %d & %d\n", x, y);
	printf("Tong hai so nguyen la : %d\n", x+y);
	printf("Hieu hai so la : %d\n", x-y);
	printf("Tich hai so la : %d\n", x*y);
	printf("Thuong hai so la : %d\n", x/y);
	return 0;
}
