#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// DE BAI :
//nhap tai khoan mat khau ngan hang
//neu dung -> chon chuc nang 
//1.xem so du
//2.rut tien
//3.chuyen khoan
//4.ket thuc giao dich
//neu sai -> dang nhap that bai 
int main(int argc, char *argv[]) {
	int tk, mk, thaotac, sotien, sotaikhoan, tienchuyen;     //Khai bao cac bien (so nguyen, vi o day su dung so nguyen thay cho ten tai khoan, mat khau, va so tien cung la so nguyen)
	printf("Nhap vao ten nguoi dung cua ban : ");            //In ra man hinh cau lenh 
	scanf("%d", &tk);                                        //De co the nhap thong tin can cau lenh scanf("...");
	printf("\nNhap vao mat khau cua ban : "); 
	scanf("%d", &mk);
	if(tk==123&&mk==456)                                     //Neu tai khoan va mat khau dung la 123 va 456 :
	{
		printf("\nDang nhap thanh cong ! ");                 //In ra man hinh cau lenh 
		printf("\n1.Xem so du ");
		printf("\n2.Rut tien ");
		printf("\n3.Chuyen khoan ");
		printf("\n4.Ket thuc giao dich ");
		printf("\nVui long chon thao tac de su dung dich vu : ");
		scanf("%d", &thaotac);
		switch(thaotac)                                      // Mo dau khoi lenh dieu kien switch - case 
		{                                                    // Khi su dung khoi lenh dieu kien switch-case hoac if-else deu can dau ngoac nhon "{}" 
		case 1 :                                             // Yeu cau so 1 
			printf("So du hien tai cua ban la : 2000000");
			break;
		case 2 :                                             // Yeu cau so 2 : o duoi su dung if-else nhu binh thuong
			printf("Nhap vao so tien ma ban muon rut : ");
			scanf("%d", &sotien);
			if(sotien<=2000000)
			printf("Rut tien thanh cong, so du hien tai cua ban la : %d", 2000000-sotien);
			else
			printf("Rut tien khong thanh cong, vui long kiem tra lai tai khoan");
			break;
		case 3 :                                              // Yeu cau so 3, tuong tu nhu yeu cau 2, su dung cau lenh if-else theo yeu cau de bai
			printf("Nhap so tai khoan ma ban muon chuyen : ");
			scanf("%d", &sotaikhoan);
			printf("Nhap so tien ma ban muon chuyen : ");
			scanf("%d", &tienchuyen);
			if(tienchuyen<=20000000)
			printf("Chuyen tien thanh cong, so du hien tai cua ban la : %d", 2000000-tienchuyen);
			else
			printf("Chuyen tien that bai, vui long kiem tra lai so du trong tai khoan");
			break;
		case 4 :                                                // Yeu cau so 4 : vi yeu cau 4 dung de ngung su dung dich vu nen khong can cau lenh if-else
		    printf("\nCam on quy khach da su dung dich vu ! ");
		    break;
		default :                                               // Default la truong hop con lai cuoi cung trong khoi lenh dieu kien switch-case
			printf("\nQuy khach da nhap sai cu phap, xin vui long kiem tra lai ");// Lhi ket thuc switch-case bat buoc phai co lenh default
			break;                                              // *Chu y : Sau moi yeu cau bat buoc phai ket thuc bang break;
		}
	}
	else                                                         // Cuoi cung la phan lenh else khi dang nhap khong thanh cong 
	printf("\nDang nhap khong thanh cong, vui long kiem tra lai tai khoan va mat khau ");
	return 0;
}

