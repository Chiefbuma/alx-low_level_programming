#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: argurmnets
 * @argv: An array
 *
 * Return: 1 or  - 0.
 */
int main(int argc, char *argv[])
{
int numall;
int digit;
int addition = 0;
for (numall = 1; numall < argc; numall++)
{
for (digit = 0; argv[numall][digit]; digit++)
{
if (argv[numall][digit] < '0' || argv[numall][digit] > '9')
{
printf("Error\n");
return (1);
}
addition += atoi(argv[numall]);
}
printf("%d\n", addition);
return (0);
}

