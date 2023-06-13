#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int size;
    scanf("%d",&size);
    int *arr = (int *)malloc(size * sizeof(int));

    int total=0;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
	}

	for(int i=0;i<size;i++)
	{
		total+=arr[i];
		}

	printf("%d",total);

    free(arr);

    return 0;
}
