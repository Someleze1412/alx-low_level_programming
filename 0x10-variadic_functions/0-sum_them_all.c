#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all  paramters.
 * @n: The sum of paramters passed to the function.
 * @...: A var number of paramters to calc the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
