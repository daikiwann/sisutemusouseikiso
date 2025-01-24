#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
     
	int intelligence = rand() % 21; 
    int stamina = rand() % (21 - intelligence);  
    int charisma = 20 - intelligence - stamina; 
    printf("intelligence: %d\n", intelligence);
    printf("stamina: %d\n", stamina);
    printf("charisma: %d\n", charisma);
    if (intelligence >= stamina && intelligence >= charisma) {
        printf("mage\n");
    } else if (stamina >= intelligence && stamina >= charisma) {
        printf("knight\n");
    } else {
        printf("thief\n");
    }

    return 0;
}