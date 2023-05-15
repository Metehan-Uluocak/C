#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    /*
    char name[30];
    printf("Lütfen isminizi giriniz\n");     -----------------> gets ile input alma

    gets(name);
    printf("%s",name);
    */

    char name[30];
    printf("Lütfen isminizi giriniz\n");

    fgets(name,sizeof(name),stdin);
    printf("%s",name);

    return 0;
}
