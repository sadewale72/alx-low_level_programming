#include "main.h"
/**
 * print_alphabet_x10 -> prints the lowercase alphabets
 */
void print_alphabet_x10(void);
{
int j;
int f;
for (f = 0; f < 10; f++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
