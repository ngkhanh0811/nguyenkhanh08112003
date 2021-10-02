#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, b, c;
	printf("Nhap vao gia tri a : ");
	scanf("%d", &a);
	printf("\nNhap vao gia tri b : ");
	scanf("%d", &b);
	printf("\nNhap vao gia tri c : ");
	scanf("%d", &c);
	if((a<b&&b<c)||(b<a&&a<c))
	printf("Gia tri lon nhat la c = %d", c);
	else if((c<a&&a<b)|(a<c&&c<b))
	printf("Gia tri lon nhat la b = %d", b);
	else 
	printf("Gia tri lon nhat la a = %d", a);
	return 0;
}
