#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[100],i,n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The reverse order is:");
	for(i=n-1;i>=0;i--)
	{
		printf("\n%d",arr[i]);
	}
	system("pause");
}
