#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int masanpham;
	float soluongdathang, tile = 0.0 ;
	printf("Nhap vao ma san pham : ");
	scanf("%d", &masanpham);
	printf("\nNhap vao so luong dat hang : ");
	scanf("%f", &soluongdathang);
		if(masanpham == 1)
		{
			if(soluongdathang >= 500)
			tile = 0.12;
			else if(soluongdathang >= 300)
			tile = 0.08;
			else 
			tile = 0.02;
			}
	    else if(masanpham == 2)
			{ 
			if(soluongdathang >= 2000)
			tile = 0.1;
		    else if(soluongdathang >= 1500)
			tile = 0.05;
			}
		else if(masanpham == 3)
			{
				if(soluongdathang >= 5000)
				tile = 0.1;
				else if(soluongdathang >= 2500)
				tile= 0.05;
				}
				soluongdathang -= soluongdathang * tile;
				printf("San luong rong la : % .2f", soluongdathang);
    }
/* Khai bao so luong dat hang, ti le 0.0, ma san pham 
Nhap vao ma san pham 
Nhap vao so luong dat hang 
Neu ma san pham la 1, so luong dat hang >=500 thi ti le la 0.12
Neu >=300 la 0.08
Con lai la 0.02

Neu ma san pham la 2, so luong dat hang >=2000 thi ti le la 0.1
Neu >=1500 la 0.05

Neu ma san pham la 3, so luong dat hang >=5000 thi ti le la 0.1
Neu >=2500 thi ti le la 0.05

Lay so luong dat hang - so luong dat hang * ti le
in ket qua ra man hinh "so luong rong la" (lam tron den 2 chu so thap phan */
