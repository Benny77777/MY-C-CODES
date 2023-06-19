#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool isPrime(int X)
{
	int i;
	for(i=2;i*i<=X;i++)
	{
		if(X%i==0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

}



void printPrime(int A[],int N)
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=A[i]-1;;j--)
		{
			if(isPrime(j))
			{
				printf("%d",j);
				break;
			}
		}
		
			for(j=A[i]+1;;j++)
		{
			if(isPrime(j))
			{
				printf("%d",j);
				break;
			}
		}
		printf("\n");
	}
}
int main(int argc, char** argv) {
	int A[]={17,28};
	int N=sizeof(A)/sizeof(A[0]);
	printPrime(A,N);
	return 0;
}
