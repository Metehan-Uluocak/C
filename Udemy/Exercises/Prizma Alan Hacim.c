#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    int a , b , h;
    int tabA , yanA , topA , hacim;
    scanf("%d %d %d",&a,&b,&h);


    tabA= a * b ;
    yanA= 2 * a * h + 2 * b * h;
    topA= 2*tabA + yanA;
    hacim= a*b*h;


    printf("Dikdörtgen prizmanın taban alanı=%d\n",tabA);
    printf("Dikdörtgen prizmanın yanal alanı=%d\n",yanA);
    printf("Dikdörtgen prizmanın toplam alanı=%d\n",topA);
    printf("Dikdörtgen prizmanın hacmi =%d\n",hacim);


    return 0;
}
