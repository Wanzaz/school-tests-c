#include <stdio.h>
#include <stdlib.h>

/*5. Na vstupu máme n celých čísel (n je celé číslo). Vypište počet čísel končící na číslici 0.*/

int main()
{
    int pocet=0 , n, x, i, pom;
    printf("Enter numbers: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &x);
        pom = x/5;
        if(pom%2 == 0 && x>=10) //nebo jen x%10 == 0
        {
            pocet++;
        }
    }
    printf("Pocet cisel koncici na cislici nula je %d", pocet);
    return 0;

} 
