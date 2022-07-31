#include <stdio.h>
#include <stdlib.h>

/*9. Na vstupu máme celé číslo n. Vypište jeho prvních 10 násobků: př: n = 6, výstup: 6 12 18 24 30 36 42 48 54 60*/

int main()
{
    int n, i, nasobek=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    char mezera = ' '; //takto se zapisuje prazdne misto v jazyce c

    for(i=1; i<=10; i++)
    {
        nasobek = nasobek + n; //nasobek =+ n;
        printf("%c %d", mezera, nasobek);
    }
    return 0;
    
} 
