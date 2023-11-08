#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num3, num4;
char *kl;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num3 = atoi(argv[1]);
kl = argv[2];
num4 = atoi(argv[3]);

if (get_op_func(kl) == NULL || kl[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*kl == '/' && num4 == 0) ||
(*kl == '%' && num4 == 0))
{
printf("Error\n");
exit(100);
}

printf("%d\n", get_op_func(kl)(num3, num4));

return (0);
}

