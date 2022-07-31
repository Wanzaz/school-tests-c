#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
7. Máme čtvercovou matici n × n  celých čísel. Nalezněte na každém řádku největší číslo a přehoďte jej s číslem na hlavní diagonále.
7. We have a square matrix of n × n integers. Find the largest number on each line and swap it with the number on the main diagonal.
*/

void list(int mat[][100], int size);
void swap_largest_number(int mat[][100], int size);
void init_random(int mat[][100], int n);

int main()
{
    int mat[100][100];
    int size;
    printf("Enter size of a matrix: ");
    scanf("%d", &size);

    init_random(mat, size);
    list(mat, size);

    printf("------------------------------------------------------\n");

    swap_largest_number(mat, size);
    list(mat, size);

    return 0;
}

void list(int mat[][100], int n)
{
    int i, j;
    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < n ; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void init_random(int mat[][100], int n)
{
    srand(time(0));

    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            mat[i][j] = rand() % 10; //not symmetric
            // mat[i][j] = 1; symmetric
        }
    }
}

void swap_largest_number(int mat[][100], int size)
{
    int i, j, largest_number=0, help, position;
    
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            if(largest_number < mat[i][j])
            {
                largest_number = mat[i][j];
                position = j;
            }
        }

        help = mat[i][i];
        mat[i][i] = largest_number;
        mat[i][position] = help;

        position=0;
        largest_number=0;
    }
}

