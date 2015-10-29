/*
 * Name:    Nick
 * Date:    10/28/15
 * Purpose: Reverse the provided string.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int x, length;
    
    if(argc != 2) {
        printf("Correct usage: ./reverse_string SAMPLE_STRING.\n");
        return 1;
    } else {
        length = strlen(argv[1]);
        
        printf("Original: %s\n", argv[1]);
        printf("Reversed: ");
        
        for(x = length; x >= 0; x--) {
            printf("%c", argv[1][x]);
        }
        
        printf("\n");
    }
    
    return 0;
}