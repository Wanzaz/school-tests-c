#include <stdio.h>
#include <stdlib.h>

/*7. Na vstupu máme celé číslo n. Vypište všechna čísla od 0 do n (na jeden řádek, čísla oddělujte mezerou).*/

int main()
{
    int n, i;
    printf("Enter n numbers: ");
    scanf("%d", &n);
    char mezera = ' '; //takto se zapisuje prazdne misto v jazyce c

    for(i=0; i<=n; i++)
    {
        printf("%c %d", mezera, i);
    }
    return 0;
  
} 
