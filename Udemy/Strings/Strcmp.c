#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // STRCMP KULLANIMI
    /*
    char mete[20];
    char berkay[20];
    int sonuc;

    scanf("%s",mete);
    scanf("%s",berkay);

    sonuc = strcmp(mete,berkay);
    //printf("%d",sonuc);

    if(sonuc<0)
    {
        printf("Berkay Kazandı");
    }
    else if(sonuc>0)
    {
        printf("Mete Kazandı");
    }
    else
    {
        printf("Esitlik");
    }
    */
    //STRNCMP KULLANIMI
    /*
    İKİSİ ARASINDAKİ TEK FARK strncmp kullanırken uzunluk seçebiliyoruz aşağıdaki gibi yoksa aynı işe yarıyor ikisinin de görevi ascii sırasına göre kıyas yapmak.
    */

    char mete[20];
    char berkay[20];
    int sonuc;

    scanf("%s",mete);
    scanf("%s",berkay);

    sonuc = strncmp(mete,berkay,3);
    //printf("%d",sonuc);

    if(sonuc<0)
    {
        printf("Berkay Kazandı");
    }
    else if(sonuc>0)
    {
        printf("Mete Kazandı");
    }
    else
    {
        printf("Esitlik");
    }




















    return 0;
}
