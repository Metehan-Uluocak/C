#include <stdio.h>
#include <string.h>



int main()
{
    int length , width ;
    printf("Please enter length and width= \n");
    scanf("%d %d",&length,&width);
    char type;
    printf("Please enter the type(T/B/S)= \n");
    scanf(" %c",&type);


    int result;
    if(type=='T')
    {
        result=length*width*18;
    }
    if(type=='B')
    {
        result=length*width*17;
    }
    if(type=='S')
    {
        result=length*width*19;
    }
    printf("Total Cost=%d",result);
    return 0;
}
