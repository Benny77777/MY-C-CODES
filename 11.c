#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x,y;
	x = y = 0;
	while(x < 5)
	{
		//y = x-y;
		
		//y = y + x;
		
		/*y += 2;
		if(y > 4)
		y -= 1;*/
		
		/*x += 1;
		y += x;*/
		
		if(y>5)
		{
			x += 1;
			if(y>3)
			x -= 1;
		}
		y += 2;
		printf("%i%i\t",x,y);
		x += 1;
	}
	return 0;
}
