#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    int count=0;
    while(i!=0)
    {
        count+=i;
        printf("%d ",i);
        i--;

    }
    printf("\nTotal = %d",count);



    return 0;
}
