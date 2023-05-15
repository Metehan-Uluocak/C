#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{
    int a , b ,c , min , max;
    scanf("%d %d %d",&a,&b,&c);
    min = a;
    if(b<a)
    {
        min=b;
    }
    if(c<a)
    {
        min=c;
    }

    max = a;
    if(b>a)
    {
        max=b;
    }
    if(c>a)
    {
        max=c;
    }

    printf("Max value= %d\nMin value= %d",max,min);


    return 0;
}
