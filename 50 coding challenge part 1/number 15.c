#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fibonacci(int n)
{
	if(n<=1)
	return n;
	return fibonacci(n-1)+fibonacci(n-2);
}
int main(int argc, char *argv[]) {
	int n;
	printf("Enter the n value:");
	scanf("%d",&n);
	printf("%d",fibonacci(n-1));
	return 0;
}
