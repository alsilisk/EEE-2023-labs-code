/* helloyou.c */
/* Hello with text string. */

#include <stdio.h>

#define SUCCESS 0

char name[]="human";

int main() {
    printf("Hello %c!\n", name);
    return SUCCESS;
}