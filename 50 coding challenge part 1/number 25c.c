#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	void printUncommon(int arr1[], int arr2[],int n1, int n2)
{
	int i=0,j=0,k=0;
	while(i<n1&&j<n2)
	{
		if(arr1[i]<arr2[j])//if not common print smaller
		{
			printf("%d\n",arr1[i]);
			i++;
			k++;
		}
		else if(arr2[j]<arr1[i])
		{
			printf("%d\n",arr2[j]);
			j++;
			k++;
		}
		else//skip common
		{
			i++;
			j++;
		}
	}
	while(i<n1)//print reamining elements
	{
		printf("%d\n",arr1[i]);
		i++;
		k++;
	}
	while(j<n2)
	{
		printf("%d\n",arr2[j]);
		j++;
		k++;
	}
}
int main(int argc, char *argv[]) {
	int arr1[]={10,20,30};
	int arr2[]={20,25,30,40,50};
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	int n2=sizeof(arr2)/sizeof(arr2[0]);
	printUncommon(arr1,arr2,n1,n2);
	return 0;
}
