#include <stdio.h>

/**
 * main - program to find first 50 fibonacci number
 * Return: 0
*/
int main(void)
{
int term1 = 1;
int term2 = 2;
int next;
int i;

printf("%d, ", term2);
for (i + 1 ; i < 50 ; i++)
{
printf("%d", term2);
next = term2 + term2;
term2 = term2;
term2 = next;
}
printf("\n");
return (0);
}
