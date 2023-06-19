#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	float convert(float fahren)
{
	float cels;
	cels=((fahren-32)*5)/9;
	return cels;
}
int main(int argc, char *argv[]) {
	float fahren;
	printf("Enter the number in fahren");
	scanf("%f",&fahren);
	printf("The value in celsius is %lf",convert(fahren));
	return 0;
}
