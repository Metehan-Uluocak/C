#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char none[100];

    strcpy(none,"Hello");

    strcat(none," World!");    //BİRLEŞTİRME İŞLEMİ YAPIYO
    //strncat(none," World!",3);


    printf("%s",none);
}
