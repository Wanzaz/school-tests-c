#include <stdio.h>
#include <stdlib.h>

/*21. Na vstupu máme dvě kladná celá čísla x, y. Vypište všechny jejich kladné dělitele.*/

int main()
{
    int pocet=0, x, y, i;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

    for(i=1;i<=x; i++)
    {
        if(x%i == 0 && y%i == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
} 
