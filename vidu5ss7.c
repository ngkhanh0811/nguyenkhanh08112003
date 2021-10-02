#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	x = 0;
	printf("Nhap so tu 1 den 3 ");
	scanf("%d", &x);
	if(x==1)
	printf("So duoc nhap la 1");
	else if(x==2)
	printf("So duoc nhap la 2");
	else if(x==3)
	printf("So duoc nhap la 3");
	else 
	printf("So duoc nhap khong nam trong pham vi tu 1 den 3");
}
