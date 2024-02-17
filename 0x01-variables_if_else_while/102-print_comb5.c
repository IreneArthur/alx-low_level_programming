#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, j;

    i = 0;
    while (i <= 99)
    {
        j = i + 1;
        while (j <= 99)
        {
            putchar('0' + (i / 10)); /* Tens place of i */
            putchar('0' + (i % 10)); /* Ones place of i */
            putchar(' ');
            putchar('0' + (j / 10)); /* Tens place of j */
            putchar('0' + (j % 10)); /* Ones place of j */

            if (!(i == 98 && j == 99))
            {
                putchar(',');
                putchar(' ');
            }

            j++;
        }
        i++;
    }

    putchar('\n');

    return (0);
}
