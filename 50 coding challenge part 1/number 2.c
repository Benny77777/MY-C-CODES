#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	for(i=0;i<=100;i++)
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
