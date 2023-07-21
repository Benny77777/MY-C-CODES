#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int x = 7;
int y = 2;
float z = x / y;
printf("z = %f\n", z);

int a = 7;
int b = 2;
float d = (float)a / (float)b;
printf("d = %f\n", d);//float z = (float)x / y; The compiler will automatically cast y to a float. 
	return 0;
}
