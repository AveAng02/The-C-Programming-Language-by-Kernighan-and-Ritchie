/******************************************************************************

Exercise 1-13. Write a programme to print a histogram of lengths of words in its 
               input. It is easy to draw the histogram with bars horizontal;
               a vertical orientation is more challanging.

*******************************************************************************/
#include <stdio.h>

#define row 100
#define column 100

int main()
{
    int histogram[row][column]; //This is the histogram that will be printed
    
    int length_count[row]; //This array stores the number of words for each word length
    
    int c, word_length, ;
    
    word_length = 0;
    
    for (int j, i = 0; i < row; i++)
    {
        length_count[row] = 0; //Setting the value of array length_count at zero
        
        for (j = 0; j < column; j++)
        {
            histogram[i][j] = 0; //Setting the value of array histogram at zero
        }
    }
    
    while ((c == getchar()) != EOF)
    {
        if (c != ' ' || c != '\n' || c != '\t')
        {
            word_length++;
        }
        else
        {
            length_count[word_length]++;
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
