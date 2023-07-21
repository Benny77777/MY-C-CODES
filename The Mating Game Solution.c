#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int contestants[] = {1,2,3};
	int *choice = contestants;// choice is now the address of the contestants array
	contestants[0] = 2;
	contestants[1] = contestants[2];
	contestants[2] = *choice;
	printf("I'm going to pick contestant number %i\n",*choice);
	printf("I'm going to pick contestant number %i\n",contestants[2]);
	printf("%i\n",sizeof(choice));
	printf("%i\n",sizeof(contestants));
	printf("%p\n",contestants);
	printf("%p",&choice);
	return 0;
}
