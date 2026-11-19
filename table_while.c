#include <stdio.h>

int main(void) {
    int i = 1;
    while (i <= 10) {
       printf("7 x %d = %d\n", i, 7 * i);
       i = i + 1;
    }
    return 0;
}