#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef union {
 float lemon;
 int lime_pieces;
} lemon_lime;
typedef struct {
 float tequila;
 float cointreau;
 lemon_lime citrus;
} margarita;
int main(int argc, char *argv[]) {
	margarita m = {2.0,1.0,{2}};
	printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n", m.tequila, m.cointreau, m.citrus.lemon);
	margarita k = {2.0,1.0,{0.5}};
	printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n", k.tequila, k.cointreau, k.citrus.lemon);
	margarita g = {2.0, 1.0, {.lime_pieces=1}};
	printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%i pieces of lime\n", g.tequila, g.cointreau, g.citrus.lime_pieces);
	return 0;
}
