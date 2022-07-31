#include <stdio.h>
#include <stdlib.h>

/*11. Na vstupu máme celé číslo n. Zjistěte jeho ciferný součet.*/

int main()
{
    int ciferny_soucet=0 , n, i;
    printf("Enter a number n: ");
    scanf("%d", &n);

    while(n > 0)
    {
        ciferny_soucet = n%10 + ciferny_soucet;
        n = n/10;
    }
    printf("Ciferny soucet cisla je %d", ciferny_soucet);
    return 0;
} 
