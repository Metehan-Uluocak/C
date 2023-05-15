#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int x = 10;

int check_value(int A[], int valueA)
{
    for (int i = 0; i < x; i++)
    {
        if (A[i] == valueA)
        {
            return i;
        }
    }
    return -1;
}

void delete_element(int A[], int pos)
{
    for (int i = pos; i < x - 1; i++)
    {
        A[i] = A[i + 1];
    }
    x--;
}

int main()
{
    int A[x];

    printf("10 elemanlik dizin icin tamsayi degerler giriniz.\n");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &A[i]);
    }

    int a = 0;
    while (a != -1)
    {
        printf("Silinecek degeri giriniz, bitirmek icin -1\n");
        scanf("%d", &a);

        int pos = check_value(A, a);
        if (pos != -1)
        {
            delete_element(A, pos);
        }
        if (a != -1)
        {
            for (int i = 0; i < x; i++)
            {
            printf("%d ", A[i]);
            }
            printf("\n");
        }

    }

    printf("Dizinin elemanlari :\n");
    for (int i = 0; i < x; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
