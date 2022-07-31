#include <stdio.h>
#include <stdlib.h>

/*3. Na vstupu máme n celých čísel (n je celé číslo). Vypište součet kladných čísel.*/

int main()
{
    int soucet=0 , n, x, i;
    printf("Enter numbers: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &x);
        if(x>0)
        {
            soucet = soucet + x;
        }
    }
    printf("Soucet kladnych cisel je %d", soucet);
    return 0;

} 
