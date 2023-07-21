#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void go_south_east(int *lat,int *lon)
{
	*lat = *lat-1;
	*lon = *lon+1;
}
int main(int argc, char *argv[]) {
	int latitude = 32;
	int longitude = -64;
	go_south_east(&latitude,&longitude);
	printf("Avast! Now at: [%i,%i]\n",latitude,longitude);
	return 0;
}
