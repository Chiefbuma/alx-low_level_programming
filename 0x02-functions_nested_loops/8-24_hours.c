#include  "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting frm morning to midnight
 */

void jack_bauer(void)
{
int h;
int m;

h = 0;

while (h < 24)
{
m = 0
while (m < 60)
{
_putchar(h / 10 + '0');
_putchar(':');
_putchar(m % 10 + '0');
_putchar('\n');
}
}
}
