#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int p;
	int k;
	int a;
	printf("Nhap gia tien 1 chiec but ");
	scanf("%d", &p);
	printf("Nhap so luong but can mua de duoc tang them 1 chiec but ");
	scanf("%d", &k);
	printf("Nhap so but ma cu Ti muon mua ");
	scanf("%d", &n);
	printf("So tien toi thieu cu Ti can mang di la %d", p * (n-n/k+1));
	return 0;
}
// gia su :
// 1 cai but : 2000
// mua 5 tang 1 
// de co the mua duoc 30 cai -> duoc tang 4 cai 2000*(30-30/5+1)
