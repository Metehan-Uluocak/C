#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int b1 , b2 , b3 , b4 ,b5 , sum;
    b1 = n%10 ;
    b2 = (n%100)/10 ;
    b3 = (n%1000) / 100 ;
    b4 = (n%10000)  / 1000 ;
    b5 =  n / 10000 ;
    sum = b1 + b2 + b3 + b4 +b5 ;
    printf("%d",sum);

    return 0
}
