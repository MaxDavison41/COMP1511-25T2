// part1_while_loops.c
//
// Written by Sofia De Bellis (z5418801) 
// on February 2024
//
// This program is a simple demonstration of a count loop in c


#include <stdio.h>
#define MAX 10

int main(void) {
	printf("Start of loop!");

    int counter = 0;
	while (counter < MAX) {
		printf("%d\n", counter);
		counter++;
	}

	printf("End of loop!");

    return 0;
}
