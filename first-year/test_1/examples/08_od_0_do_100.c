#include <stdio.h>
#include <stdlib.h>

/*8. Na vstupu máme celé číslo n. Vypište všechna čísla od n do 100 (na jeden řádek, čísla oddělujte mezerou).*/

int main()
{
    int n=100, i;
    char mezera = ' '; //takto se zapisuje prazdne misto v jazyce c

    for(i=0; i<=n; i++)
    {
        printf("%c %d", mezera, i);
        
    }
    return 0;

} 
