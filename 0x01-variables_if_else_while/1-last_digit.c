#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main function entry point
* Description: checks last digit of assigned variable
* Return: always 0
*/
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, m);
}
	/* your code goes there */
	return (0);
}
