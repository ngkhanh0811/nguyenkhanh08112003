#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	char c;
	printf("Enter the character ");
	scanf("%c", &c);
	if(c>='A' && c<='Z')
	printf ("Lowercase character = %c", c + 'a' - 'A');
	else 
	printf("Character entered %c", c);
}
