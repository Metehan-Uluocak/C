#include <stdio.h>
#include <stdlib.h>



int main()
{
    int deg1 , deg2 ,deg3 ;
    scanf("%d %d %d",&deg1,&deg2,&deg3);

    if(deg1 == deg2 && deg1 == deg3)
    {
        printf("Equilateral Triangle");
    }
    else if((deg1 == deg2)!= deg3 || (deg1 == deg3) != deg2 || (deg2 == deg3) != deg1 )
    {
        printf("İsosceles Triangle");
    }

    else
    {
        printf("Scalene Triangle");
    }
}
