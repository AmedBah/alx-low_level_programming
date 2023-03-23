#include <stdarg.h>
#include "variadic_functions.h"

/**
 * Calculates the sum of all its integer parameters.
 * 
 * @param n The number of integer parameters to be summed.
 * @param ... The integer parameters to be summed.
 * 
 * @return The sum of all the integer parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
int i, sum = 0;
va_list args;
va_start(args, n);

if (n == 0) 
    return 0;

    
for (i = 0; i < n; i++) 
{
sum += va_arg(args, int);
}
    
va_end(args);
return (sum);
}


