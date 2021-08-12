/******************************************************************************
 * Exercise 1-11. How would you test the word count program? What kinds of input
 *                are most likely to uncover bugs if there are any?
 *
 * BUG 1: Cumulation of random symbols such as !@#$% or numbers such as 12345 
 *        are counted as words.
 * BUG 2: 
*******************************************************************************/
#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state;
    
    state = OUT;
    
    nl = nw = nc = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
        printf("%d %d %d\n", nl, nw, nc);
    }
}
