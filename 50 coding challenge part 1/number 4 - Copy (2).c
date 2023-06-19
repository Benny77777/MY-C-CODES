#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i,j;
	printf("multiplication table for 1,2,3,4,5,6,7,8,9,10 are\n");
	for(j=1;j<=12;j++)
	{
	for(i=1;i<=12;i++)
	{
		int mult1 = j*i;
		printf("%d*%d=%d\t",i,j,mult1);
			}
			printf("\n");
		}
	return 0;
}
