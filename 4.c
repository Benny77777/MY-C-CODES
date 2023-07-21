#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char suit = 'H';
	switch(suit)
	{
		case 'C':
			puts("Clubs");
			break;
		case 'D':
			puts("Diamond");
			break;
		case 'H':
			puts("Hearts");
			break;
		default:
			puts("Spade");
			break;
	}
	return 0;
}
