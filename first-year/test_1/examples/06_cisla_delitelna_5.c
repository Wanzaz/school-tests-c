#include <stdio.h>
#include <stdlib.h>

/*6. Na vstupu máme n celých čísel (n je celé číslo). Vypište počet čísel, která jsou dělitelná 5 beze zbytku.*/

int main()
{
    int pocet=0 , n, x, i;
    printf("Enter numbers: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &x);
        if(x%5 == 0)
        {
            pocet++;
        }
    }
    printf("Pocet cisel delitelnych peti je %d", pocet);
    return 0;

} 
