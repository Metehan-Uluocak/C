#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    //STRREV  TERSTEN YAZIYO
    /*
    char test[100];
    printf("Lutfen bir text giriniz\n");
    scanf("%s",&test);

    printf("Girilen İfade:%s\n",test);
    printf("Girilen Ters İfade:%s",strrev(test));
    */
    //STRLWR   KÜÇÜLTÜYO LOWERDAN GELİYOR   STRUPR BÜYÜTÜYO
    /*
    char test[100];
    printf("Lutfen bir text giriniz\n");
    fgets(test,sizeof(test),stdin);

    printf("Girilen İfade:%s\n",test);
    printf("Girilen Kucuk İfade:%s",strlwr(test));
    printf("Girilen Buyuk İfade:%s",strupr(test));
    */
    //STRSTR    BİR NEVİ ARAMA İŞİ GÖRÜYO mesela dil yazdık ya oraya dil dahil ondan sonrasını alıyor
    char test[100]="C dilini öğreniyorum";
    char *sub;
    sub=strstr(test,"dil");
    printf("%s",sub);



    return 0;
}
