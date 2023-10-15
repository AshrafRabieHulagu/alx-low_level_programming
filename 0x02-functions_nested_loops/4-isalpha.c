#include "main.h"

/**
 * _isalpha - Checks for alphabetic Character
 * @C; The Character to be Checked
 * Return: 1 for alphabetic Character or 0 for anything else
*/

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
