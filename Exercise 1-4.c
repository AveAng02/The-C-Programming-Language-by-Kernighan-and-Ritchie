/*
 * Exercise 1-4. Write a programme to print the corresponding 
 *               Celsius to Fahrenheit table.
 */

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("   Celsius\tFahrenheit\n");
    
    celsius = lower;
    
    while (celsius <= upper)
    {
        fahr = (9 * celsius / 5) + 32;
        printf ("\t%3.1\t%6.2\n", celsius, fahr);
        celsius = celsius + step;
    }
}
