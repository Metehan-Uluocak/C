#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

int main()
{
    int arr[SIZE];
    int *arrPtr;


    arrPtr=arr;

    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",arrPtr);
        arrPtr++;
    }



    printf("Elements in array: ");
    arrPtr=arr;

    for(int i=0;i<SIZE;i++)
    {
        printf("%d ",*arrPtr);
        arrPtr++;
    }
    int max;
    int min;
    int *minPtr , *maxPtr;
    max=arr[0];
    min=arr[0];

    minPtr=&min;
    maxPtr=&max;
    arrPtr=arr;
    for(int i=0;i<SIZE;i++)
    {
        if(*minPtr > *arrPtr)
        {
            minPtr = arrPtr;
        }
        arrPtr++;
    }
    printf("\nMin value: %d\n",*minPtr);

    arrPtr=arr;
    for(int i=0;i<SIZE;i++)
    {
        if(*maxPtr < *arrPtr)
        {
            maxPtr = arrPtr;
        }
        arrPtr++;
    }
    printf("Max value: %d",*maxPtr);


    return 0;
}








