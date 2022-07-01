#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func- function add a + b
 * @s: the aargument
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != *s)
		i++;
	return(op[i].f);

}
