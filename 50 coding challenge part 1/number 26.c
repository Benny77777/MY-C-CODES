#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int findMissing(int a[],int b[],int n,int m)
{   int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i] == b[j])
			{
				break;
			}
			if(j==m)
			{
			return printf("%d",a[i]);
			}
		}
	}
}
int main(int argc, char *arg){
	int a[]={1,2,6,3,7,4,5};
	int b[]={2,4,3,1,5};
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[1]);
	printf("%d",findMissing(a,b,n,m));
	return 0;
}
