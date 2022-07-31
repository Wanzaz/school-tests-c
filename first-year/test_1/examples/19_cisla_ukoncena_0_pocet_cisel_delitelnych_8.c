#include <stdio.h>
#include <stdlib.h>

/*19. Na vstupu máme celá čísla, jejich načítání ukončíme, jakmile načteme číslo 0. (Číslo 0 se nebude započítávat do výsledku.) Vypište počet čísel, která jsou dělitelná  8 beze zbytku.*/

int main()
{
    int pocet=0, x;

    while(x!=0)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if(x%8==0)
        {
            pocet++;
        }
        printf("Pocet cisel delitelnych osmi je %d", pocet);
    }
    return 0;
} 
