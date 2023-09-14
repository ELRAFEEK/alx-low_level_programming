#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of parameters
 * @n: unsigned int
 * Return: ptr
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;

	int sum = 0;
	unsigned int i;

	va_start(ptr, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
