#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char chucai;
	printf("Nhap mot chu cai trong bang alphabet (a-z)");
	scanf("%c", &chucai);
	if (chucai < 'a' || chucai > 'z')
	printf("Chu cai nhap vao khong nam trong bang alphabet");
	else 
	    switch(chucai)
	{
		case 'a' :
	    case 'e' :
	    case 'u' :
	    case 'o' :
	    case 'i' :
	    printf("Chu cai tren la nguyen am");
	    break;
	    case 'z' :
	    	printf("Chu cai cuoi cung cua bang chu cai da duoc nhap vao");
	    	break;
	    	default :
	    	printf("Chu cai duoc nhap vao la phu am");
	    	break;
	    	}
}
