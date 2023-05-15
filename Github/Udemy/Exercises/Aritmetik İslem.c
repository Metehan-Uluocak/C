#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{
    int a , b , c , x ;
    int result;
    scanf("%d %d %d %d",&a ,&b ,&c ,&x);
    result = (a*x*x) + (b*x) + c ;
    printf("%d",result);

    return 0;
}
