#include "main.h"
#include <stdio.h>
/**
* main - print fizz-buss
* Return: Always 0 or 1
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
