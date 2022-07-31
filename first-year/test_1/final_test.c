#include <stdio.h>
#include <stdlib.h>

/*Na vstupu je n čísel, která jsou celá. Urči kolik z nich končí 0.  Např. Vstup n: 5 8 14 30 50 Výstup: 2*/
/*Pocity z testu: Zvladl jsem za necelych pet minut a fungovalo mi to hned*/


int main()
{
    int n, i, pocet=0, x;
    printf("Enter a number n: ");
    scanf("%d",&n);

    for(i=1; i<=n;i++)
    {
        printf("Enter a number x: ");
        scanf("%d",&x);
        if(x%10 == 0)
        {
            pocet++;
        }
    }
    printf("Pocet cisel, ktere konci na 0 je %d", pocet);
  
    return 0;
}
