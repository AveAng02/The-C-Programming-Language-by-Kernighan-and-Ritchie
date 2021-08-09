/******************************************************************************

Exercise 1-8. Write a programme to count blanks, tabs and newlines.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int bk, tb, nl, c;
    
    bk = tb = nl = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++bk;
        }
        if (c == '\t')
        {
            ++tb;
        }
        if (c == '\n')
        {
            ++nl;
        }
    }
    
    printf("Blanks = %d\nTabs = %d\nNew Line = %d\n", bk, tb, nl);

    return 0;
}
