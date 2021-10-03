#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char kytu;
	printf("Nhap vao ky tu de hien thi chuc nang cua may tinh : ");
	scanf("%c", &kytu);
	switch (kytu)
	{
	    case ('a' | 'A') :
		    printf("Ada");
		    break;
	    case('b' | 'B') :
			printf("Basic");
			break;
		case('c' | 'C') :
			printf("COBOL");
			break;
		case('d' | 'D'):
			printf("dBASE III");
			break;
		case('f' | 'F'):
			printf("Fortran");
			break;
		case('p' | 'P'):
			printf("Pascal");
			break;
		case('v' | 'V'):
			printf("Visual++");
	        break;
	    default :
	        printf("Khong co chuc nang nao duoc hien thi ");
	    break;
	}
	return 0;
}
