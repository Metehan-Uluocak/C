#include <stdio.h>
#include <string.h>



int main()
{
    int arr1[10];
    int i = 0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int j =0;
    int min;
    min = arr1[1];


    for(j=0;j<10;j++)
    {
        if(min>arr1[j])
        {
            min = arr1[j];
        }
    }
    int max;
    int k = 0;
    max = 0;
    for(k=0;k<10;k++)
    {
        if(max<arr1[k])
        {
            max = arr1[k];

        }
    }

    printf("Min value=%d\nMax value=%d",min,max);







    return 0;
}
