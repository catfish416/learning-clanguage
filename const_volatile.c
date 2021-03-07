#include <stdio.h>

unsigned char flag = 1;

void intr_func() {
    flag = 0;
}

int main() {
    int i = 5;
    const int* p = &i;
    i = 7;
//    *p = 6;

    printf("i = %d\n", i);


/*    intr_func();

    while(flag) {
        printf("hello\n");
    }
*/
    return 0;
}

