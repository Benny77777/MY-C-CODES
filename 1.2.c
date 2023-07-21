#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char card[] = "JQK";//and not *char = "JQK";	
	int a_card = card[2];// use const *char = "JQK"; to prevent the code from making any changes
	card[2] = card[1];
	card[1] = card[0];
	card[0] = card[2];
	card[2] = card[1];
	card[1] = a_card;
	printf("%s\n",card);
	
	
	
	
	char masked_raider[] = "Alive";
	char *Jimmy = masked_raider;
	printf("Masked_raider is %s, Jimmy is %s\n",masked_raider,Jimmy);
	masked_raider[0] = 'D';
	masked_raider[1] = 'e';
	masked_raider[2] = 'a';
	masked_raider[3] = 'd';
	masked_raider[4] = '!';
	printf("Masked_raider is %s, Jimmy is %s",masked_raider,Jimmy);
	return 0;
}
