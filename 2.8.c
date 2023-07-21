#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef union {
 short count;
 float weight;
 float volume;
} quantity;

typedef struct {
 const char *name;
 const char *country;
 quantity amount;
} fruit_order;
int main(int argc, char *argv[]) {
	//quantity q = {4};
	//quantity q = {.weight = 1.5};
	quantity q;
	q.volume= 3.7;
	printf("the volume value is %.2f\n",q.volume);
	
	fruit_order apples = {"apples", "England", .amount.weight=4.2};
    printf("This order contains %2.2f lbs of %s\n", apples.amount.weight, apples.name);
	return 0;
}
