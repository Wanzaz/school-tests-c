#include <stdio.h>
#include <stdlib.h>

/*2. Na vstupu máme n celých čísel (n je celé číslo). Vypište počet záporných čísel.*/

int main()
{
    int pocet=0, n, x, i;
    printf("Enter numbers: ");
    scanf("%d", &n);

    for(i=1; i <=n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &x);
        if(x<0)
        {
            pocet++;
        }
    }
    printf("Pocet zapornych cisel je %d", pocet);
    return 0;

} 
