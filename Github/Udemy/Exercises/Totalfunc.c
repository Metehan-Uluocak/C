#include <stdio.h>

int total(int a , int b);



int total(int a , int b)
{
    return a + b;
}



int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum = total(a,b);
    printf("%d",sum);



    return 0;
}
