#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int counter = 1;
	while(counter < 11)
	{
		printf("%i green bottles, hanging on the wall\n",counter);
		counter +=1;
	}
	return 0;
}
