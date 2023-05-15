#include <stdio.h>




int main()
{
    float x;
    float result;
    scanf("%f",&x);
    result = (x*x*x)+(13*x*x)+(47*x)+(5);
    printf("f(%.3f) = %.3f" , x , result);



    return 0;
}
