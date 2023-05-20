#include <stdio.h>

int isUpperCase(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}

int isLowerCase(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

int isDigitCase(char ch)
{
    return ch >= '0' && ch <= '9';
}

int main()
{
    char ch;
    char nfile[100];

    int lines = 0;
    int word = 0;
    int lcase = 0;
    int ucase = 0;
    int digit = 0;
    int start = 0;




    scanf("%s", nfile);
    FILE *file = fopen(nfile, "r");

    if (file == NULL)
    {
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }
        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            start = 0;
        } else if (!start)
        {
            word++;
            start = 1;
        }
        if (isLowerCase(ch))
        {
            lcase++;
        }
        if (isUpperCase(ch))
        {
            ucase++;
        }
        if (isDigitCase(ch))
        {
            digit++;
        }
    }



    printf("%d\n", lines);
    printf("%d\n", word);
    printf("%d\n", lcase);
    printf("%d\n", ucase);
    printf("%d\n", digit);

    fclose(file);

    return 0;
}
