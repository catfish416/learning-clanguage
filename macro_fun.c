#include <stdio.h>

#define MY_PRINT(a, ...) if(a>0) printf(__VA_ARGS__)


int main() {
    int a  = 5;
    //char* str = "hello";
    int str = 9;

    MY_PRINT(a, str);

    return 0;
}
