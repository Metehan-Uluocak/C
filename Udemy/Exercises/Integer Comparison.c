#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int a , b ;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d greater than %d",a,b);
    }
    else if(a<b)
    {
        printf("%d greater than %d",b,a);
    }
    else
    {
        printf("%d equal %d",a,b);
    }


    return 0;
}
