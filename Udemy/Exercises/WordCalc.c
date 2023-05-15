#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    char text[100]="";
    scanf("%[^\n]",&text);

    int count = 1;
    int i=0;
    for(i=0;i<=sizeof(text);i++)
    {
        if(text[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count);


    return 0;
}
