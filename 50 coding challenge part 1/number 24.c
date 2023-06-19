#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int merge(int a[],int b[],int n1,int n2)
{
	int i=0,j=0,k=0;
	int n3=n1+n2;
	int c[1000];
	while(i<n1&&j<n2)
	{
		if(a[i]<b[j])
		 c[k++]=a[i++];
		else
		c[k++]=b[j++];
	}
	while(i<n1)
	c[k++]=a[i++];
	while(j<n2)
	c[k++]=b[j++];
	printf("Finale array after merging:");
	for(i=0;i<n3;i++)
	{
		printf("%d",c[i]);
	}
}
int main(int argc, char *argv[]) {
	int n1,n2,a[1000],b[1000],i,j;
	printf("Enter the size of the first arrays:\n");
	scanf("%d",&n1);
	printf("Enter the elements of the first array:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("Enter the sizes of the second arrays:\n");
	scanf("%d",&n2);
	printf("Enter the elements of the second array:\n");
	for(j=0;j<n1;j++)
	{
		scanf("%d",&b[j]);
	}
	merge(a,b,n1,n2);
		return 0;
}
