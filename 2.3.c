#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct fish {
 const char *name;
 const char *species;
 int teeth;
 int age;
};
/* Print out the catalog entry */
void catalog(struct fish f)
{
 printf("%s is a %s with %i teeth. He is %i\n",
 f.name, f.species, f.teeth, f.age);
}
/* Print the label for the tank */
void label(struct fish f)
{
 printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",
 f.name, f.species, f.teeth, f.age);
}


int main() {
struct fish snappy = {"Snappy", "Piranha", 69, 4,2};
printf("Name = %s\n", snappy.name); 
catalog(snappy);
label(snappy);
printf("\n");
//update a struct 
snappy.teeth = 68;
//assign one struct to another
struct fish gnasher = snappy;
catalog(gnasher);
label(gnasher);
	return 0;
}
/*ALRERNATIVE FOR THE ABOVE CODE


void catalog(const char *name, const char *species, int teeth, int age)
{
 printf("%s is a %s with %i teeth. He is %i\n",
 name, species, teeth, age);
}
void label(const char *name, const char *species, int teeth, int age)
{
 printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",
 name, species, teeth, age);
}

int main()
{
 catalog("Snappy", "Piranha", 69, 4);
 label("Snappy", "Piranha", 69, 4);
 return 0;
}
*/
