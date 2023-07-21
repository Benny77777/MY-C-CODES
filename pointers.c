#include<stdio.h>
void skip(char *msg)
{
	printf("The seventh character is %c",*(msg+6));
}
int main(){
	int n =7;
    int * ptr = n;
	printf("%p", ptr);
	printf("\n");
	printf("%li\n", ptr);
	int drinks[] = {4,2,3};
	printf("1st order: %i drinks\n",drinks[0]);
	printf("1st order: %i drinks\n",*drinks);
	printf("1st order: %i drinks\n",drinks[2]);
	printf("1st order: %i drinks\n",*(drinks+2));
	char *msg_from_any = "Don't call me";
	skip(msg_from_any);
}
