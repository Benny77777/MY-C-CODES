#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,sum=0;
	for(i=11;i<=29;i++)
	{
		if(i%2==0)
		{
			sum = sum +i;
		}
	}
	printf("The sum of even numbers between 10 and 30 exclusive is %d",sum);
	return 0;
}
