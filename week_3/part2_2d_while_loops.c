// part2_2d_while_loops.c
//
// This program was writtn by Sofia De Bellis (z5418801)
// on Febuarary 2024
//
// This program is a simple deonstration of a 2D while loop 

#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int main(void) {
    int row = 0;
    int col = 0;

    printf("Outer while loop begins\n");

    while (row < MAX_ROW) {
        col = 0;
        printf("Inner while loop begins\n");

        while (col < MAX_COL) {
            printf("Row Value: %d\n", row);
            printf("Col Value: %d\n", col);
            col++;
        }

        printf("Inner while loop ends\n");
        row++;
    }

    printf("Outer while loop finishes\n");

    return 0;
}
