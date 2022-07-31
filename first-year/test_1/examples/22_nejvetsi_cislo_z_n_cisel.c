#include <stdio.h>
#include <stdlib.h>

/*22. Na vstupu máme n celých čísel (n je celé číslo). Vypište z nich to největší.*/

int main()
{
    int max=0, n, x, i;
    printf("Enter numbers: ");
    scanf("%d", &n);

    for(i=1; i <=n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &x);
        if(x>max)
        {
            max = x;
        }
    }
    printf("Nejvetsi cislo z n cisel je %d", max);
    return 0;
} 
