#include <stdio.h>
#include <stdlib.h>

/*16. Na vstupu máme celá čísla, jejich načítání ukončíme, jakmile načteme číslo 0. (Číslo 0 se nebude započítávat do výsledku.) Vypište průměr záporných čísel.*/

int main()
{
    int soucet=0, pocet=0, x;

    while(x!=0)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if(x<0)
        {
            soucet = soucet + x;
            pocet++;
        }
    }
    printf("Prumer zapornych cisel je %d", soucet/pocet);
    return 0;
} 
