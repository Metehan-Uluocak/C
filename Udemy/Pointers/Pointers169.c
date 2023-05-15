#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char text1[100];
    char *ptr1;
    char *ptr2;


    printf("Text: ");
    scanf("%[^\n]%*c", text1);

    for(ptr2=text1;*ptr2;ptr2++);
    ptr2--;

    for (ptr1=text1 ; ptr1 < ptr2; ptr1++, ptr2--)
    {
        *ptr1 = tolower(*ptr1);
        *ptr2 = tolower(*ptr2);

        if (*ptr1 != *ptr2)
        {
            printf("Not Pallindrom");
            return 0;
        }
    }

    printf("Pallindrom");
    return 0;
}
