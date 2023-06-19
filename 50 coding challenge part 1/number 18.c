#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int isPrime(int n,int m)
{
 int i,j;
 for(j=n;j<=m;j++)
 {
 	for(i=2;i<=j-1;i++)
 	{
 		if(j%i==0)
 		{
 			break;
		 }
	 }
	 if(i==j)
	 {
	 printf("%d\n",j);
	 }
	 }	
}	
int main()
{
	int n,m;
	printf("enter the range\n");
 scanf("%d",&n);
 scanf("%d",&m);
	isPrime(n,m);
	return 0;
}
