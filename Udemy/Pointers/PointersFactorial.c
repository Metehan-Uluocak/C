#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int *fact);


int main()
{
    int x;
    scanf("%d",&x);
    int *xPtr;
    xPtr=&x;
    int result = factorial(xPtr);
    printf("%d",result);

    return 0;
}

int factorial(int *fact)
{
    int total=1;

    for(*fact; *fact>0;(*fact)--)
    {
        total*= *fact;
    }

    return total;
}
