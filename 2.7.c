#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*typedef struct {
 const char *name;
 const char *species;
 int age;
} turtle;
void happy_birthday(turtle t)
{
 t.age = t.age + 1;
 printf("Happy Birthday %s! You are now %i years old!\n",
 t.name, t.age);
}
int main()
{
 turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
 happy_birthday(myrtle);
 printf("%s's age is now %i\n", myrtle.name, myrtle.age);
	return 0;
}*/

//UPDATED CODE
typedef struct {
 const char *name;
 const char *species;
 int age;
} turtle;
void happy_birthday(turtle *t)
{
 (*t).age = (*t).age + 1;//t->age = t->age - 1;
 printf("Happy Birthday %s! You are now %i years old!\n",
 (*t).name, (*t).age);
}
int main()
{
 turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
 happy_birthday(&myrtle);
 printf("%s's age is now %i\n", myrtle.name, myrtle.age);
	return 0;
}


typedef union {
 short count;
 float weight;
 float volume;
} quantity;
