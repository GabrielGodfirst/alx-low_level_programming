#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the difference of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the multiplication of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the division of two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the mod of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the mod of two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
