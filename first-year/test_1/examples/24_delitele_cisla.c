#include <stdio.h>
#include <stdlib.h>

/*24. Na vstupu máme celé číslo n. Vytiskněte počet kladných dělitelů tohoto čísla. Př. n = 8, výstup: 1 2 4 8*/

int main()
{
    int x, i;
    printf("Enter a number: ");
    scanf("%d", &x);

    for(i=1; i<=x;i++)
    {
        if(x%i == 0)
            printf("%d\n", i);
    }

    return 0;
} 
