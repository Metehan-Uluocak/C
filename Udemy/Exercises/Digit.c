#include <stdio.h>


int main()
{
    int num;
    scanf("%d",&num);
    int oD = num%10;
    num = num/10;
    int tD = num%10;
    num = num/10;
    int hD = num%10;
    num = num/10;
    int thD = num%10;

    printf("Thousands Digit=%d\nHundreds Digit=%d\nTens Digit=%d\nOnes Digit=%d",thD,hD,tD,oD);



    return 0;
}
