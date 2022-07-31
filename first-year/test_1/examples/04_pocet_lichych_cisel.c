#include <stdio.h>
#include <stdlib.h>

/*4. Na vstupu máme n celých čísel (n je celé číslo). Vypište počet lichých čísel.*/

int main()
{
    int pocet=0 , n, x, i;
    printf("Enter numbers: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &x);
        if(x%2!=0)
        {
            pocet++;
        }
    }
    printf("Pocet lichych cisel je %d", pocet);
    return 0;

} 
