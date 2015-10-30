/*
 * Name:    Nick
 * Date:    10/29/15
 * Purpose: Heads or Tails!
*/

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    
    if(argc != 2) {
        printf("Usage: ./heads_tails <heads|tails>\n");
        exit(1);
    }
    
    char *sides[] = {
        "heads", "tails"
    };
    
    srand(time(NULL));
    i = rand() % 3;
    
    printf("The coin is in the air!\n");
    sleep(1);
    printf("You call... %s!\n", argv[1]);
    sleep(1);
        
    if(strcmp(argv[1], sides[i]) != 0) {
        printf("Sorry, you lost. Try again!\n");
    } else {
        printf("You win!\n");
    }
    
    return 0;
}