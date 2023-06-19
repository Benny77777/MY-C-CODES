#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,fact = 1;
	for(i=2;i<=10;i++)
	{
		fact = fact*i;
	}
	printf("The factorial of 10 is %d",fact);
	return 0;
}
