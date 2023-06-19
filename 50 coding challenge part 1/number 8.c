#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float convert(float cels)
{
	float fahren;
	fahren=((cels*9)/5)+32;
	return fahren;
}
int main(int argc, char *argv[]) {
	float cels;
	printf("Enter the number in celsius");
	scanf("%f",&cels);
	printf("The value in fahrenheit is %lf",convert(cels));
	return 0;
}
