#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - Prints a string in reverse order
*@s: String to reverse
*Return: Nothing
*/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}[A[A[A[A[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[[C[3~[3~[3~[D[3~[3~[D[B[B[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[Ci--)[B[C[C[C[C[C[C[C[C[C[C[C[ i = str(s);[B[B[B[B[B[B[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[A[C
[A[[A[A[A[B[B[C[C[C[C[C[C[C[C[C[C[C[C[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[[A[C[C[C[C[C[C[C[C[[A[C[C[C[C[C[C[C[C[C[C[[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[A[A[C[A[C[C[C[C[C[C[C[C[C[C[[A[A[B[C[C[C[C[C[C[C[C[C[C[C[C[C[C[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[[A[[A[A[C[C[C[C[C[C[C[C[C[[A[C[C[C[C[C[C[C[C[C[C[C[C[[A[C[C[C[C[C[C[C[C[C[C[C[C#include "main.h"

/**
 * print_rev - prints string beckwards
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
