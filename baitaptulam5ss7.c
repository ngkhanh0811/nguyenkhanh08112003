#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int diem;
	printf("Nhap vao so diem cua hoc sinh : ");
	scanf("%d", &diem);
	if(diem>=75)
	printf("Hoc sinh do duoc xep loai A ");
	else if (diem<75&&diem>=60)
	printf("Hoc sinh do duoc xep loai B ");
	else if (diem<60&&diem>=45)
	printf("Hoc sinh do duoc xep loai C ");
	else if(diem<45&&diem>=30)
	printf("Hoc sinh do xep loai D ");
	else 
	printf("Hoc sinh do xep loai E ");
	return 0;
}
