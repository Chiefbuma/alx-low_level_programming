#include  "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting frm morning to midnight
 */

void jack_bauer(void)
{
for (int h = 0; h < 24; h++)
{
for (int m = 0; m < 60; m++)
{
_putchar(num / 10 + '0');
_putchar(':');
_putchar(num % 10 + '0');
_putchar('\n');
}
}
}
