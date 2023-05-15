#include <stdio.h>

#define SIZE 10

int main()
{
    int x ;
    int a = -1;

    scanf("%d", &x);

    char parantez[x];
    char stack[SIZE];


    for (int i = 0; i < x; i++)
    {
        scanf(" %c", &parantez[i]);
    }

    for (int i = 0; i < x; i++)
    {
        if (parantez[i] == '(' || parantez[i] == '[' || parantez[i] == '{')
        {
            if (a == SIZE - 1)
            {
                printf("Parantezler uyumlu değil");
                return 0;
            }
            a++;
            stack[a] = parantez[i];
        }
        else if (parantez[i] == ')' || parantez[i] == ']' || parantez[i] == '}')
        {
            if (a == -1)
            {
                printf("Parantezler uyumlu değil");
                return 0;
            }
            else if ((stack[a] == '(' && parantez[i] == ')') ||
                       (stack[a] == '[' && parantez[i] == ']') ||
                       (stack[a] == '{' && parantez[i] == '}'))
                       {
                a--;
            }
            else
            {
                printf("Parantezler uyumlu değil");
                return 0;
            }
        }
    }

    if (a == -1)
    {
        printf("Parantezler uyumlu");
    }
    else
    {
        printf("Parantezler uyumlu değil");
    }

    return 0;
}
