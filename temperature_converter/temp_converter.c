/*
 * Name:    Nick
 * Date:    10/29/15
 * Purpose: Convert a given fahrenheit temperature to celsius,
 *          and kelvin.
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int celsius(int temperature);
float kelvin(int temperature);

int main(int argc, char *argv[])
{
    char *p;
    float k;
    int c, temperature;
    
    // Correct number of arguments
    if(argc != 2) {
        printf("Usage: ./temp_converter <integer>\n");
        exit(1);
    } 
    
    long conv = strtol(argv[1], &p, 10);
    
    if(errno != 0 || *p != '\0' || conv > INT_MAX) {
        printf("Error converting string -> integer. Exiting.\n");
        exit(1);
    } else {
        // Convert the integer
        temperature = conv;
        c = celsius(temperature);
        k = kelvin(temperature);
        printf("Fahrenheit: %d\n", temperature);
        printf("Celsius: %d\n", c);
        printf("Kelvin: %f\n", k);
        return 0;
    }
}

int celsius(int temperature)
{
    int celsius = (temperature - 32) * 5 / 9;
    return celsius;
}

float kelvin(int temperature)
{
    float kelvin = celsius(temperature) + 273.15;
    return kelvin;
}