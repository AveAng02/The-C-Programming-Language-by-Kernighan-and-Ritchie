/******************************************************************************

Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int c;
    
    while ((c = getchar()) != EOF)
    {        
        printf("\tValue of getchar() != EOF is %1d\n", c != EOF);
        putchar(c);
    }
    
    return 0;
}
