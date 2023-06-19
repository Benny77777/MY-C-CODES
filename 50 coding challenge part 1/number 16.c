#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int isPrime(int n)
{
    int i,flag=1;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=0;
		break;
		}
	}
	if(n<=1)
	flag=0;
	if(flag==1)
	{
		printf("\n %d is a prime number",n);
	}
	else
	{
		printf("\n %d is not a prime number",n);
	}
}
int main(int argc, char *argv[]) {
	int n;	
	printf("Enter the number: \n");
	scanf("%d",&n);
	isPrime(n);
	return 0;
	
}
