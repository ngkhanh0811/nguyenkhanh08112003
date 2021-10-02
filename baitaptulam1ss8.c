#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x, y;
	char giatri;
	printf("Nhap vao gia tri x ");
	scanf("%d", &x);
	printf("Nhap vao gia tri y ");
	scanf("%d", &y);
	if(x>3000 || x<2000)
    printf ("Gia tri cua x la : %d", x);
    else
    printf("Khong co gia tri cua x thoa man ");
    if(100<y<500)
    printf("\nGia tri cua y la %d", y);
    else
	printf ("\nKhong co gia tri cua y thoam man ");
return 0; 
}
    	
