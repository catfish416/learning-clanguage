#include <stdio.h>

#define MAX_BITS    (32)
// (0 <= N < 32)
unsigned int rotate_left(unsigned int X, int N) {
    unsigned int over = X >> (MAX_BITS - N);
    return (X << N | over);
}

int main() {
    printf("%x\n", rotate_left(0x12345678, 20));
}