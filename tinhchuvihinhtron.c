#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	float b = 3.14;
	printf("Nhap gia tri cua a ");
	scanf("%d", &a);
	printf("Chu vi cua hinh tron duong kinh a la %f", a * b);
	return 0;
}
