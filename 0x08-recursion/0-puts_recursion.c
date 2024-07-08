#include <stdio.h>
/*
 * _puts_recursion - Prints a string followed by a new line recursively.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s) {
    /* Base case: If the current character is '\0' (end of string), print a newline */
    if (*s == '\0') {
        putchar('\n');
        return;
    }

    /* Print the current character and recursively call _puts_recursion with the next character */
    putchar(*s);
    _puts_recursion(s + 1);
}
