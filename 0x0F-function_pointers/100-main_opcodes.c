#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own main function opcodes
 * @argc: number of arguements
 * @argv: number of arrays
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
int bytes, h;
char *arr;
{
if (argc != 2)
{
printf("Error\n");
exit(2);
}
arr = (char *) main;
for (h = 0; h < bytes; h++)
{
if (h == bytes - 1)
{
printf("%02hhx\n", arr[h]);
break;
}
printf("%02hhx\n", arr[h]);
}
{
return (0);
}
}
