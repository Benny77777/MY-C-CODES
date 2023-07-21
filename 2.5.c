#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct exercise {
 const char *description;
 float duration;
};
struct meal {
 const char *ingredients;
 float weight;
};
struct preferences {
 struct meal food;
 struct exercise exercise;
};
 typedef struct fish {
 const char *name;
 const char *species;
 int teeth;
 int age;
 struct preferences care;
}snappy;


void label(struct fish a)
{
 printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",
 a.name, a.species, a.teeth, a.age);
 printf("Feed with %2.2f lbs of %s and allow to %s for %2.2f hours\n",a.care.food.weight, a.care.food.ingredients,
a.care.exercise.description, a.care.exercise);
}
int main(int argc, char *argv[]) {
	snappy snappy = {"Snappy", "Piranha", 69, 4, {{"meat", 0.2}, {"wim in the jacuzzi", 7.5}}};
	printf("Feed with %f lbs\n",snappy.care.food.weight);
	label(snappy);
	return 0;
}
