#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int basic;
	printf("Please enter your basic");
	scanf("%d", &basic);
	switch(basic)
	{
	case 200 : printf("\nBonus is dollar %d", 50);
	break;
	case 300 : printf("\nBonus is dollar %d", 125);
	break;
	case 400 : printf("\nBonus is dollar %d", 140);
	break;
	case 500 : printf("\nBonus is dollar %d", 175);
	default :
		printf("Loi he thong !!! "); 
		}
}
