/*******************************************************************************

Exercise 1-10. Write a programme to copy its input to its output, replacing each
               tab by \t, each backspace by \b, and each backslash by \\. This 
               makes tabs and backspaces visioble in an unambiguous.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int c;
    
    while ((c = getchar()) != EOF)
    {
        if (c == '\\')
        {
            printf("\\\\");
            continue;
        }
        if (c == '\b')
        {
            printf("\b");
            continue;
        }
        if (c == '\t')
        {
            printf("\\t");
            continue;
        }
        putchar(c);
    }
}
