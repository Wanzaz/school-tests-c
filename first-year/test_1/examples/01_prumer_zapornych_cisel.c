#include <stdio.h>
#include <stdlib.h>

/*1. Na vstupu máme n celých čísel (n je celé číslo). Vypište průměr záporných čísel.*/

int main()
{
    int prumer=0, pocet=0, n, x, i;
    printf("Enter numbers: ");
    scanf("%d", &n);

    for(i=1; i <=n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &x);
        if(x<0)
        {
            pocet++;
            prumer = prumer + x;
        }
    }
    printf("Prumer zapornych cisel je %d", prumer/pocet);
    return 0;

} 
