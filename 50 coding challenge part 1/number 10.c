#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,arr[1000],n,sum=0;
	printf("Enter the length of the array");
	scanf("%d",&n);
	printf("enter the elements of the array:\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	
}
    for(i=1;i<=n;i++)
    {
    	
    	sum+=arr[i];
	}
	printf("Sum of array is:%d",sum);
	return 0;
}
