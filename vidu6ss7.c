#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int x, y;
	x = y = 0;
	printf("Nhap so tu 1 den 3 : ");
	scanf("%d", &x);
	if(x==1)
	{ printf ("Nhap gia tri tu 1 den 5 : ");
	scanf("%d", &y);
	if(y<=5)
	printf("Gia tri cua y nam trong khoang tu 1 den 5 ");
	else 
	printf("Gia tri cua y vuot qua 5");
	}
	else 
	printf("Gia tri cua x khong phai la 1");
}
