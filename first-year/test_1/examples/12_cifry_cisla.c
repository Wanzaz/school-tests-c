#include <stdio.h>
#include <stdlib.h>

/*12. Na vstupu máme celé číslo n. Zjistěte, kolik má cifer.*/

int main()
{
    int pocet=0, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n!=0)
    {
        n = n/10;
        pocet++;
    }
    printf("\nPocet cifer je %d", pocet);
    return 0;

} 
