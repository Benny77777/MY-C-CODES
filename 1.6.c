#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float latitude;
 float longitude;
 char info[80];
 int started = 0;
 puts("data=[");
 while (scanf("%f,%f,%79[^\n]",&latitude ,&longitude ,info ) == 3) {
 if (started)
 printf(",\n");
 else
 started = 1;
 if ((latitude < -90.0) || (latitude > 90.0)) {
 fprintf(stderr, "Invalid latitude: %f\n", latitude);
 return 2;
 }
 if ((longitude < -180.0) || (longitude > 180.0)) {
 fprintf(stderr, "Invalid longitude: %f\n", longitude);
 return 2;
}
 printf("{latitude: %f, longitude: %f, info: '%s'}",latitude ,longitude , info );
 }
 puts("\n]");
 // ] means give every character at the end of the line
	return 0;
}
