/**
*_puts_recursion - function itself );
*@s: the input
*Return:Always 0
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}
