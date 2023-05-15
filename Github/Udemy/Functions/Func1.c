#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ustunu_al(int x , int y)
{
    int i = 0;
    int total=1;
    for(i=0;i<y;i++)
    {
        total*=x;
    }

    return total;


}



int main()
{
    int sayi1 , sayi2 ;
    int result;
    scanf("%d %d",&sayi1,&sayi2);

    result=ustunu_al(sayi1,sayi2);
    printf("%d",result);
    return 0;
}
