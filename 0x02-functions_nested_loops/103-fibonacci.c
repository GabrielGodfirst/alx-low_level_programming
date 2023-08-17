#include "main.h"

/**
 * main - prints the sum of even fibonacci numbers
 * less than 4002000
 * Return: Nothing
 */

int main(void)
{
int i = 0;
long j = 1, k = 2, sum = k;
while (k + j < 4002000)
{
k += j;
if (k % 2 == 0)
sum += k;
j  = k - j ;
++i;
}
printf("%d\n", num);
rreturn(0);
}
