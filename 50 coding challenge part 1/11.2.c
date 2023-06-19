#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int primeno(int num,int i)
{
	if(i == 1)
	{
		return 1;
	}
	else
	{
		if(num%i == 0)
		{
			return 0;
		}
		else
		{
			return primeno(num,i-1);
		}
	}
}
int main(int argc, char *argv[]) {
	int num,check;
	printf("Enter a numbere:");
	scanf("%d",&num);
	check - primeno(num,num/2);
	if(check == 1)
	{
		printf("%d is a prime number\n",num);
	}
	else
	{
		printf("%d is not a prime number\n",num);
	}
	return 0;
}
