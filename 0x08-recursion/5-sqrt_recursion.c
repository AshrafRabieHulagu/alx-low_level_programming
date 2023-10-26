#include "main.h"

/**
 * _sqrt_ recursion - find natural square root
 * @n: int
 * @val: square root
 * Return: int
*/
int square(int n, int va1);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
*/

int square(int n, int va1)
{
if (va1 * va1 == n)
return (va1);
else if (va1 * va1 < n)
return (square(n, va1 + 1));
else
return (-1);
}
