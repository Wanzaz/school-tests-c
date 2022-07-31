#include <stdio.h>
#include <stdlib.h>

/*18. Na vstupu máme celá čísla, jejich načítání ukončíme, jakmile načteme číslo 0. (Číslo 0 se nebude započítávat do výsledku.) Vypište počet čísel končících cifrou 3.*/

int main()
{
    int pocet=0, x;

    while(x!=0)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if(x!=0)
        {
            if(x%10==3)
            {
                pocet++;
            }
        }
    }
    printf("Pocet cisel s koncici cifrou tri je %d", pocet);
    return 0;
} 
