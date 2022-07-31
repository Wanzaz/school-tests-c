#include <stdio.h>
#include <stdlib.h>

/*15. Na vstupu máme celá čísla, jejich načítání ukončíme, jakmile načteme číslo 0. (Číslo 0 se nebude započítávat do výsledku.) Vypište počet kladných čísel.*/

int main()
{
    int pocet=0, x;

    while(x!=0)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if(x>0)
        {
            pocet++;
        }
    }
    printf("Pocet kladnych cisel je %d", pocet);
    return 0;
} 
