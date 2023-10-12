#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include "graphing_calc.h"

void plotval(float y, unsigned long x, int tick_mark, char* plot_line, int previous_char, int column){
    char* tickmark[] = {"---","   "};
    plot_line[previous_char] = ' ';
    plot_line[column] = '*';
    printf(CYN "x = %010d" RED ", " MAG "y = %03f" RED "|%s" YEL "%s\n" RESET, x, y, tickmark[tick_mark], plot_line);
}


int main() {
    unsigned long x = 0ul;
    float y = 0;
    int rationalise = 0;
    int previous_char; 
    int term_width = console_size();
    int tick_mark;

    char *plot_line = (char*)malloc(term_width-32);
    memset(plot_line,' ',term_width - 33);
    plot_line[term_width - 33] = '\0';
    for(x = 0; x < 100; x++) {
        y = (sin(((x*9) * 3.14159)/180)/2 + 0.5);
        previous_char = rationalise;
        rationalise = (term_width - 34) * y;
        if( x % 5 == 0){
            tick_mark = 0;
        }
        plotval(y, x, tick_mark, plot_line, previous_char, rationalise);
        tick_mark = 1;
    }
}