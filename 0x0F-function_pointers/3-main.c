#include <stdio.h>
#include "function_pointers.h"

/**
 * main - prints result of simple operations
 * @argc: number of arguements supplied
 * @argv: array of pointers
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
int num1, num2;
char *op;
{
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);
printf("%d\n", get_op_func(op)(num1, num2));
{
return (0);
}
}
}
