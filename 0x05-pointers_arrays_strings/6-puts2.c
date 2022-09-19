
[A[A[A[A[A[B[B[[A[A[A[A[A[B[B[B[B[B[B[B[B[B[B[A[A[A[A[A[B[B[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C

[A[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C

[A#include "main.h"

/**
 * puts2 - print alternating chars of string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
