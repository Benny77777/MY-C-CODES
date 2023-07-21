#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct island {
 char *name;
 char *opens;
 char *closes;
 struct island *next;
} island;


island* create(char *name)
{
 island *i = malloc(sizeof(island));
 i->name = name;
 i->opens = "09:00";
 i->closes = "17:00";
 i->next = NULL;
 return i;
}
void display(island *start)
{
 island *i = start;
 for (; i != NULL ; i ->next) {
 printf("Name: %s open: %s-%s\n",i->name ,i->opens ,i->closes );
 }
}
int main(int argc, char *argv[]) {
	island amity = {"Amity", "09:00", "17:00", NULL};
    island craggy = {"Craggy", "09:00", "17:00", NULL};
    island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
    island shutter = {"Shutter", "09:00", "17:00", NULL};
    island skull = {"Skull", "09:00", "17:00", NULL};
    
    amity.next = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &skull;
    skull.next = &shutter;
    
    display(&amity);
    
    char name[80];
 fgets(name, 80, stdin);
 island *p_island0 = create(name);
 fgets(name, 80, stdin);
 island *p_island1 = create(name);
 p_island0->next = p_island1;
 display(p_island0);
	return 0;
}
