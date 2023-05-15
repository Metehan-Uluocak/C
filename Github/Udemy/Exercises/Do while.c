#include <stdio.h>




int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    float total=0;
    do{

        total += (float)1/i;

        i++;

    }while(i!=n+1);

    printf("%.2f",total);

    return 0;
}
