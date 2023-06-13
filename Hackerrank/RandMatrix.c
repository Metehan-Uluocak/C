#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int x;
    srand(time(NULL));

    for(int i=1;i<=20;i++){
        x = 1 + rand()%6;
        printf("%3d",x);
        if(i%5==0)
        {
            printf("\n");
        }
    }







    return 0;
}


