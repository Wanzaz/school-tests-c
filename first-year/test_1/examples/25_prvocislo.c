#include <stdio.h>
#include <stdlib.h>

/*25. Na vstupu máme celé číslo n. Zjistěte, zda je to prvočíslo. (Využijte příklad 24.)*/

int main()
{
    int pocet=0, x, i;
    printf("Enter a number: ");
    scanf("%d", &x);

    for(i=1; i<=x;i++)
    {
        if(x%i == 0)
            pocet++;
    }
    if(pocet >= 3)
        printf("%d neni prvocislo", x);
    else
        printf("%d je prvocislo", x);

    return 0;
} 
