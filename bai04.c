#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x;
	printf("Nhap vao nhiet do co the(tinh theo do C) : ");
	scanf("%f", &x);
	printf("Nhiet do co the cua ban(tinh theo do F) la : %f", (x/5)*9+32);
	return 0;
}
