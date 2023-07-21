#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int card_name[1000],val;
	puts("Enter the card name:");
	scanf("%2s",card_name);
	switch(card_name[0])
{
	case 'K':
	{
		val = 10;
		printf("The card value is: %i\n",val);
		break;
	}
	case 'Q':
	{
		val = 10;
		printf("The card value is: %i\n",val);
		break;
	}
	case 'J':
	{
		val = 10;
		printf("The card value is: %i\n",val);
		break;
	}
	case 'A':
	{
		val = 11;
		printf("The card value is: %i\n",val);
		break;
	}
	default:
	{
	val = atoi(card_name);
	printf("The card value is: %i\n",val);
	break;
	}
	
}
	return 0;
}
