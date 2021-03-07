/********************************************************
 *  only use add sub and shift to implement 
 * "N/2, N/8, N/9, N/13, N*13" *
 *******************************************************/

#include <stdio.h>

int divid_by_2(int n) {
    return n >> 1;
}

int divid_by_8(int n) {
    return n >> 3;
}

int divid_by_9(int n) {
    int i;
    for (i = 0; n >= 9; i++)
        n = n - 9;
    
    return i;
}

int divid_by_13(int n) {
    int i;
    for (i = 0; n >= 13; i++)
        n = n - 13;
    
    return i;
}

int mul_13(int n) {
    int rslt = n << 4;
    rslt = rslt - n - n - n;
    //return (n << 4 - n - n - n);
    return rslt;
}

int main() {
    int a = 31;

    printf("%d/2 = %d\n", a, divid_by_2(a));
    printf("%d/8 = %d\n", a, divid_by_8(a));
    printf("%d/9 = %d\n", a, divid_by_9(a));
    printf("%d/13 = %d\n", a, divid_by_13(a));
    printf("%d*13 = %d\n", a, mul_13(a));

    return 0;
}