// part1_while_loops.c
//
// Written by YOUR-NAME (zID), 
// on TODAYS-DATE
//
// This program is a simple demonstration of a count loop in c

#include <stdio.h>
#define MAX_NUM 10

int main(void) {
    // TODO: Write your solution here
    printf("Start of looop");
    int i = 0;

    while (i < MAX_NUM) {
        printf("Number: %d\n", i);
        i++;
    }

    printf("End of loop");

    return 0;
}
