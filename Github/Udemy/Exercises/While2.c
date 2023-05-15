#include <stdio.h>


int main()
{
    int st ;
    scanf("%d",&st);
    int i=0;
    int count=0;
    while(i!=st+1)
    {
        if(i%17==0)
        {
            printf("%3d ",i);
            count++;
        }
        if(count%10==0)
        {
            printf("\n");
            continue;
        }
        i++;

    }




    return 0;
}
