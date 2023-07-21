#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("I like Turtles!");
	fprintf(stdout, "I like Turtles!");
	float latitude;
 float longitude;
 char info[80];
 while (scanf("%f,%f,%79[^\n]",&latitude ,&longitude ,info ) == 3)
 if ((latitude > 26 ) && (latitude < 34 ))
 if ((longitude > -76 ) && (longitude < -64 ))
 printf("%f,%f,%s\n",latitude ,longitude ,info );
	return 0;
}
