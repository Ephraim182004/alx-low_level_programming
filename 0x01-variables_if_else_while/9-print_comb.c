#include <stdio.h>
/**
*main - Entry point
*Description:prints all possible combinations of single-digit numbers
*Return: Always zero when succesful
*/
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
{
	putchar((x % 10) + '0');

	if (x == 9)
	continue;

	putchar(',');
	putchar(' ');
}
	putchar('\n');
	return (0);
}
