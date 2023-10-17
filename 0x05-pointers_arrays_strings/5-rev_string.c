#include "main.h"


void rev_string(char *s);
{
        int i;
        int j;
        char *p;

        p = s;
        i = 0;
        while (*p != '\0')
        {
                i++;
                p++;
        }

        for (j = i - 1 ; j >= 0 ; j--)
        {
                _putchar(s[j]);
        }

}
