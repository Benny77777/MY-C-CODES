#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,t,sum=0,remainder;
	printf("Enter an integer\n");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		remainder = t%10;
		sum = sum+remainder;
		t=t/10;
	}
	printf("The sum of the digits %d=%d\n",n,sum);
	return 0;
}
