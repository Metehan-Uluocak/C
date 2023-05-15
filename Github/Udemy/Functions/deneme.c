#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.14
#define circleArea(r) (PI*r*r)



int main()
{
    /*
    int yaricap,Alan;
    scanf("%d",&yaricap);
    Alan=circleArea(yaricap);
    printf("Alan=%d",Alan);
    */

    #ifdef PI
        printf("PI clared");
    #else
            printf("PI declared");
    #endif




    return 0;



}
