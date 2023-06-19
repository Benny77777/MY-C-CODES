#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int array(int n)
{
	int i,j,arr[100];
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The positive numbers are\n");
for(i=0;i<n;i++)
{
if(arr[i]>0)
 printf("%d\n",arr[i]);
}
}
int main(int argc, char *argv[]) {
	int n;
	printf("Enter the length of the array:");
	scanf("%d",&n);
	array(n);
	return 0;
}
