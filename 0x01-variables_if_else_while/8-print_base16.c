#include <stdio.h>

/**
 * main - prints all the numbers of base sixteen in lowercase
 * Return: Always 0
 */

int main(void)
{
	char numbers = '0';
	char letters = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
