#include <stdio.h>
#include <ctype.h>


int main()
{
    char c;
    while ((c=getchar())!='\0')

    {
        if (isalpha(c))
        {
            if (c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u'||c == 'y' ||c == 'A' ||c == 'E' ||c == 'I' ||c == 'O' ||c == 'U'||c == 'Y');

            else
            {
                putchar('.');
                putchar(tolower(c));
            }
        }else break;
    }
    return 0;
}
