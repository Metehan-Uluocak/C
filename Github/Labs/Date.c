#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int day,month,year;
    printf("Every month 30 days\n")
    printf("Format 1: (DAY MONTH YEAR) \n");
    scanf("%d %d %d", &day , &month , &year);

    int cday,cmonth,cyear;
    printf("Format 2(CURRENT): (DAY MONTH YEAR) \n");
    scanf("%d %d %d",&cday , &cmonth , &cyear);


    int fday,fmonth,fyear;

    fday = cday - day ;
    fmonth = (cmonth - month)*30;
    fyear = (cyear - year)*365;

    int result ;

    result = fday + fmonth + fyear;
    printf("The day which is difference between : %d",result);
}
