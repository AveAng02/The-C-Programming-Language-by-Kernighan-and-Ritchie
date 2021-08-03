/*
 * Exercise 1-5. Modify the temperature convertion programme 
 *               to print the table in reverse order, that is,
 *               from 300 degrees to 0.
 */

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    ///////////////Celsius to Fahrenheit/////////////////
    printf("Celsius\tFahrenheit\n");
    
    for (celsius = upper; celsius >= lower; celsius = celsius - step)
    {
        fahr = (9 * celsius / 5) + 32;
        printf ("%3.1f\t%6.2f \n", celsius, fahr);
    }
    
    ///////////////Fahrenheit to Celsius//////////////////
    printf("\nFahrenheit\tCelsius\n");
    
    for (fahr = upper; fahr >= lower; fahr = fahr - step)
    {
        celsius = 5 * (fahr - 32)/ 9;
        printf ("   %3.1f  \t%3.2f \n", fahr, celsius);
    }
}
