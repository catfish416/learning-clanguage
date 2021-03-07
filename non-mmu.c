
/********************************************************
 *  set some bit to 1 or 0, only by physical address *
 *******************************************************/


#include <stdio.h>

/* set N bit to 1, by physical address */
void set_n_by_addr(unsigned char* addr, unsigned char n) {
    unsigned char mask = 1<<n;
    *addr |= mask; 
}

/* set N bit to 0, by physical address */
void clear_n_by_addr(unsigned char* addr, unsigned char n) {
    unsigned char mask = 1<<n;
    *addr &= ~mask;
}

int main() {
//    int a = 1;
//    set_n_by_addr((unsigned char*)&a, 2);

    unsigned char a = 5;
    clear_n_by_addr(&a, 2);

    printf("a = %d\n", a);
//    printf("*p = %d\n", *p);

    printf("hello world\n");
    return 0;
}

