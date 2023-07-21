#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fortune_cookie(char msg[])
{
	printf("Message reads: %s\n",msg);
	printf("Message occupies: %i bytes \n",sizeof(msg));
	printf("The msg string is stored at: %p\n",msg);
}
int main(int argc, char *argv[]) {
	char quote[] = "Cookies make you fat";
	fortune_cookie(quote);
	printf("%i\n",sizeof(int));
	printf("%i\n",sizeof("Turtles!"));
	char phew[] = "Turtles!";
	printf("%i",sizeof(phew));
	return 0;
}
