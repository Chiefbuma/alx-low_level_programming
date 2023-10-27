#include <stdio.h>
/**
 * main - function
 * @argc: argurments
 * @argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int arg;
for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);
return (0);
}
