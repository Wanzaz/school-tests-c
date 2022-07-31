#include <stdio.h>
#include <stdlib.h>

/*13. Na vstupu máme celé číslo n. Zjistěte kolik cifer 2 se nachází v jeho zápisu. Př. n = 2522, výstup: 3*/

int main()
{
    int pocet=0, n, prom;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n>0) 
    { 
        prom = n%10;
        n = n/10; 
        if (prom == 2)
            pocet++;
    }
    if(pocet >= 1)
        printf("Cislo obsahuje %d dvojky", pocet);
    else
        printf("Cislo neobsahuje zadnou 2");
    return 0;
} 
