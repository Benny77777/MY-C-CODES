#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char first_name[20];
	char last_name[20];
	printf("Enter the first and last name:\n");
	scanf("%19s %19s",first_name,last_name);
	printf("First: %s Last: %s\n",first_name,last_name);
	
	
	// Put a limit on the number of characters that scanf() will read into the function
	char food[5];
	printf("Enter your favorite food:\n");
	scanf("%s",food);//correcttion scanf("%4s",food);
	printf("Favorite food is %s :",food);
	
	
	char food1[5];
	printf("Enter your favorite food:\n");
	fgets(food1, sizeof(food1), stdin);
	printf("Favorite food is %s :",food1);
	return 0;
}
