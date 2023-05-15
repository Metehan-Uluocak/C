#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char test[]="mete";
    /*
    char test[20];
    scanf("%s",test);

    printf("%s\n",mete);
    printf("%s",test);
    return 0;
    */
    //mete[0]='s';
    printf("%s\n",test);
    printf("Boy: %d\n",strlen(test));   // Strlen gördüğümüz boyutu bastırır örneğin test dizisinde boy 4
    printf("Boy: %d\n",sizeof(test));   // Sizeof gerçek boyutu bastırır \0ı dahil eder örneğin test dizisinde boy 5
}
