#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char mete[]="Benim adim Mete";
    char berkay[100]="";

    //strcpy(berkay,mete);      KOPYALAMA SIRASI (KOPYALANACAK YER,KOPYALANACAK İÇERİK)
    strncpy(berkay,mete,10);     //
    printf("%s",berkay);


    return 0;
}
