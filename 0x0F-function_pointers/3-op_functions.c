#include "3-calc.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of 2 nums
 * @a: first number
 * @b: 2nd num
 * Return: sum of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of 2 nums
 * @a: first num
 * @b: second num
 * Return: their differene
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: first one
 * @b: second num
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: fisrt num
 * @b: second num
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division
 * @a: firts num
 * @b: second
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
