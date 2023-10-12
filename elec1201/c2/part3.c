#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include "graphing_calc.h"

void plotval(float y, unsigned long x, char* plot_line, int previous_char, int column){
    plot_line[previous_char] = ' ';
    plot_line[column] = '*';
    printf("x = %010d, y = %03f |%s\n", x, y, plot_line);
}


int main() {
    unsigned long x = 0ul;
    float y = 0;
    int rationalise = 0;
    int previous_char; 
    int term_width = console_size();

    char *plot_line = (char*)malloc(term_width-32);
    memset(plot_line,' ',term_width - 33);
    plot_line[term_width - 33] = '\0';
    for(;;) {
        y = (sin(((x*FREQ) * PI)/180)/2 + 0.5);
        previous_char = rationalise;
        rationalise = (term_width - 34) * y;
        plotval(y, x, plot_line, previous_char, rationalise);
        x++;
    }
}