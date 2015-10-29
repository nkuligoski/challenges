/*
 * Name:    Nick
 * Date:    10/28/15
 * Purpose: Generate a random password. Secure password 
 *          must meet the following requirements:
 *              1) 32 characters in length
 *              2) Include lowercase letters
 *              3) Includes uppercase letters
 *              4) Includes random numbers [0-9]
 *              5) Includes selected special characters
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int x, r;
    x = 0;
    
    // Build array of possible characters
    char alphabet[77] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
        'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
        'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
        'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
        's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2',
        '3', '4', '5', '6', '7', '8', '9', '!', '@', '#', '$',
        '%', '^', '&', '*', '(', ')', '-', '+', '=', ';', ':'
    };
    
    printf("Generating password...\n");
    
    // Print random 32 characters from array
    while(x <= 32) {
        r = rand() % 77;
        printf("%c", alphabet[r]);
        x++;
    }
    
    printf("\n");
    
    return 0;
}