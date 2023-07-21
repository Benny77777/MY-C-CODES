#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		int card_name[3],val,count = 0;
	while(card_name[0] != 'X'){
	puts("Enter the card name:");
	scanf("%2s",card_name);
	switch(card_name[0])
{
	case 'K':
	case 'Q':
	case 'J':
	    val = 10;
	    break;
	case 'A':
	    val = 11;
	    break;
	case 'X':
	    continue;
	default:
	val = atoi(card_name);
	if(val<1 || val>10)
	{
		puts("i don't understand this value");
		continue;
	}
}
	if(val>2 && val<7)
	{
	count++;
    }
	else if(count == 10)
	{
	count --;
    }
    printf("Current count: %d\n",count);
}
	return 0;
}
