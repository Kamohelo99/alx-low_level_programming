#include "main.h"

int sqrt_check(int num, int root);
int _sqrt_recursion(int n);

/**
 * sqrt_check - checks sqrt of c
 *
 * @num : number
 * @root: possible sqrt
 *
 * Return: squareroot if it exists
 * else -1
 */

int sqrt_check(int num, int root)
{
	if (num * num == root)
		return (num);
	if (num * num > root)
		return (-1);
	return (sqrt_check(num + 1, root));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to return square of
 *
 * Return: if n has a natural sqrt - the natural sqrt of n
 * else  -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
