#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1=0,n2=1,n3,i,number;
	printf("Enter the number of elements:");
	scanf("%d",&number);
	printf("%d\n",n1);
	for(i=2;i<number;i++)
	{
		n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
