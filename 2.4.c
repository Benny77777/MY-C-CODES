#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct preferences {
 const char *food;
 float exercise_hours;
};
struct fish {
 const char *name;
 const char *species;
 int teeth;
 int age;
 struct preferences care;
};

struct fish snappy = {"Snappy", "Piranha", 69, 4, {"Meat", 7.5}};
printf("Snappy likes to eat %s", snappy.care.food);
printf("Snappy likes to exercise for %lf hours", snappy.care.exercise_hours);
	return 0;
}
