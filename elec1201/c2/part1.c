#include <stdio.h>


int main() {
    unsigned long x = 0ul;
    for(;;) {
        printf("x= %05lu\n", x);
        x++;
    }
}