#include <stdio.h>
#include <stdlib.h>

/*17. Na vstupu máme celá čísla, jejich načítání ukončíme, jakmile načteme číslo 0. (Číslo 0 se nebude započítávat do výsledku.) Vypište počet sudých čísel.*/

int main()
{
    int pocet=0, x;

    while(x!=0)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if(x==0)
        {
            printf("Pocet sudych cisel je %d", pocet);
        }
        if(x%2==0)
        {
            pocet++;
        }
    }
    return 0;
} 
