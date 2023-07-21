#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int larger(int a,int b)
{
	if(a>b)
	return a;
	else return b;
}

int main() {
	int a,b;
	puts("Enter the value of a and b");
	scanf("%i %i",&a,&b);
	int greater = (a,b);
	printf("%i is larger!\n",greater);
	return 0;
}
