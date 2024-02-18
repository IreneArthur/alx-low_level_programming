#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 */
void print_alphabet(void)
{
char all = 'a';

while (all <= 'z')
{
_putchar(all);
all++;
}
_putchar('\n');
}
