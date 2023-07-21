#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char card_name[30];
	puts("Enter the card name: ");
	scanf("%2s",card_name);
	int val;
	if(card_name[0] == 'K')
	{
		val = 10;
	}
	else if(card_name[0] == 'Q')
	{
		val = 10;
	}
	else if(card_name[0] == 'J')
	{
		val = 10;
	}
	else if(card_name[0] == 'A')
	{
		val = 11;
	}
	else
	{
	val = atoi(card_name);
	}
	printf("The card value is: %i\n",val);
	
	if(val >= 3 && val <= 6)
	{
		puts("count has gone up");
	}
	else if(val == 10)
	{
		puts("count has gone down");
	}
	return 0;
}
