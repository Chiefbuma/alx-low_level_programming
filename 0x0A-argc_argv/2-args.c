#include <stdio.h>
#include "main.h"
/**
 * main - Prints all arguments
 * @argc: The number of argumets
 * @argv: An array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
int arg;

for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);

return (0);
}
