#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char xeploai;
	printf("Nhap vao xep loai cua nhan vien trong cong ty : ");
	scanf("%c", &xeploai);
	if(xeploai=='A')
	printf("Luong thang ma nguoi do nhan duoc la : %d", 300*30);
	else if(xeploai=='B')
	printf("Luong thang ma nguoi do nhan duoc la : %d", 250*30);
	else 
	printf("Luong thang ma nguoi do nhan duoc la : %d", 100*30);
	return 0;
}
