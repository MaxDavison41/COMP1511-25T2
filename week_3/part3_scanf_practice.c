// Program that demonstrates scanf being used in a while loop condition.

#include <stdio.h>

int main(void) {

    char loop_scan;
    int counter = 0;
    while (counter < 5) {
        scanf("%c", &loop_scan);
        printf("Counter = %d, Loop_scan = %c\n", counter, loop_scan);
        counter++;
    }

    //  while (scanf(" %c", &loop_scan) == 1) {
    //      printf("Loop_scan = %c\n", loop_scan);
    //  }

    return 0;
}


