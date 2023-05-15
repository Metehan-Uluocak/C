#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int size;
    printf("Size: ");
    scanf("%d",&size);

    int array[size];
    int *arPtr;
    arPtr=array;

    for(int i=0;i<size;i++)
    {
        scanf("%d",arPtr);
        arPtr++;
    }
    printf("Element to be found:");

    arPtr=array;

    int x;
    int *xPtr;

    xPtr=&x;
    scanf("%d",xPtr);
    int count = 0;
    for(int i=0;i<size;i++)
    {
        if(*arPtr==x)
        {
            printf("%d is a %d . element in array.",*xPtr,i+1);
            count++;
        }
        arPtr++;
    }
    if(count==0)
    {
        printf("%d is not a element in array",*xPtr);
    }

    return 0;
}
