#include <stdio.h>

unsigned char left_circular_shift(unsigned char a, unsigned char n) {
    unsigned char b = a >> (8 - n);
    return (a << n | b);
}

unsigned char right_circular_shift(unsigned char a, unsigned char n) {
    unsigned char b = a << (8 - n);
    return (a >> n | b);
}

int main() {
    unsigned char a = 0x33;
    unsigned char n = 1;

    printf("0x%x left circle shift %d : 0x%x\n", a, n, left_circular_shift(a, n));
    printf("0x%x right circle shift %d : 0x%x\n", a, n, right_circular_shift(a, n));
    return 0;
}