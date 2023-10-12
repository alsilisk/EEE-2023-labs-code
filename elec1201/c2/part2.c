#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14159
#define FREQ 2


int main() {

    unsigned long x = 0ul;
    float y = 0;

    for(;;) {
        y = (sin(((x*FREQ) * PI)/180)/2 + 0.5);
        printf("x= %05lu, y= %05f\n", x, y);
        x++;
    }
}