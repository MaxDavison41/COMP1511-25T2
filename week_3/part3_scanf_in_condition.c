// part2_2d_while_loops.c
//
// This program was writtn by Max Davison (z5492092)
// on Febuarary 2025
//
// This program is a simple deonstration of a loop which scans until control-d

#include <stdio.h>

int main(void) {

    int counter = 0;
    // Scans input it until control-d
    while (scanf("%d", &counter) == 1) {
        printf("Output: %d\n", counter);
    }

    return 0;
}