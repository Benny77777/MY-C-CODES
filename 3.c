#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ex[20];
	puts("Enter boyfriend's name:");
	scanf("%19s",&ex);
	printf("Dear %s. \n\n\tYou're History.\n",ex);
	return 0;
}
