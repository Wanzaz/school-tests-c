#include <stdio.h>
#include <stdlib.h>

/*10.Na vstupu máme celé číslo x a n celých čísel (n je celé číslo). Vypište počet čísel, která jsou větší než x. Př: x = 4, n = 3, čísla: 5 1 -9, výstup: 1 (je to číslo 5)*/

int main()
{
    int pocet=0 , n, y, i, x;
    printf("Enter a number n: ");
    scanf("%d", &n);
    printf("Enter a number x: ");
    scanf("%d", &x);

    for(i=1; i<=n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &y);
        if(x<y)
        {
            pocet++;
        }
    }
    printf("Pocet cisel, ktera jsou vetsi nez cislo x je %d", pocet);
    return 0;
} 
