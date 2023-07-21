#include <stdio.h>
#include <stdlib.h>
#include "encrypt.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 char msg[80];
 while (fgets(msg, 80, stdin)) {
 encrypt(msg);
 printf("%s", msg);
	return 0;
}
}
