#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int a[1000],i,j,k,temp,n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter how many times to rotate rigth:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		temp=a[n-1];
		for(j=n-1;j>0;j--)
		{
			a[j]=a[j-1];
		}
		a[j]=temp;
	}
	printf("\nAfter left rotation we have",n);
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	system("pause"); 
}
