#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
	printf("Nhap gia tri cua so a ");
	scanf("%d", &a);
	printf("Nhap gia tri cua so b ");
	scanf("%d", &b);
	printf ("Tong = %d", a+b);
	return 0;
}
