#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("The value of INT_MAX is %i\n", INT_MAX);
 printf("The value of INT_MIN is %i\n", INT_MIN);
 printf("An int takes %i bytes\n", sizeof(int));
 
 printf("The value of FLT_MAX is %f\n", FLT_MAX);
 printf("The value of FLT_MIN is %.50f\n", FLT_MIN);
 printf("A float takes %i bytes\n", sizeof(float));//you could type the size of short,long,char or double to know thier sizes
	return 0;
}
