#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	int i ;

    for(int i = a ; i <= b ; i++ )
    {
        if(i<10)
        {
            switch(i)
            {
                case 1:
                    printf("one\n");
                    i++;


                case 2:
                    if(!(i>b))
                    {
                    printf("two\n");
                    i++;
                    }
                    else
                    {
                        break;
                    }




                case 3:
                    if(!(i>b))
                    {
                    printf("three\n");
                    i++;
                    }
                    else
                    {
                        break;
                    }



                case 4:
                    if(!(i>b))
                    {
                    printf("four\n");
                    i++;
                    }
                    else
                    {
                        break;
                    }



                case 5:
                    if(!(i>b))
                    {
                    printf("five\n");
                    i++;
                    }
                    else
                    {
                        break;
                    }



                case 6:
                    if(!(i>b))
                    {
                    printf("six\n");
                    i++;
                    }
                    else
                    {
                        break;
                    }


                case 7:
                    if(!(i>b))
                    {
                    printf("seven\n");
                    i++;
                    }
                    else
                    {
                        break;
                    }


                case 8:
                    if(!(i>b))
                    {
                    printf("eight\n");
                    i++;
                    }
                    else
                    {
                        break;
                    }


                case 9:
                    if(!(i>b))
                    {
                    printf("nine\n");
                    i++;
                    }
                    else
                    {
                        break;
                    }




            }

        }
        if(i%2==0 && i > 9)
        {
            printf("even\n");

        }
        else if(i%2!=0 && i >9)
        {
            printf("odd\n");
        }


    }

    return 0;
}

