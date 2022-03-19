#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Struct op
 * 
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char type;
	void (*f)(va_list);
} op_print;

/**
 * print_char - prints a character
 * @ptr: void pointer to assumed char
 * @ap: array
 * Return: No return value
 */
void print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);

	printf("%c", c);
}


/**
 * print_int - prints an int 
 * @ap: array
 * Return: No return value
 */
void print_int(va_list ap)
{
	int i;

	i = va_arg(ap, int);

	printf("%i", i);
}


/**
 * print_float - prints a float
 * @ap: array
 * Return: No return value
 */
void print_float(va_list ap)
{
	float f;

	f = va_arg(ap, double);

	printf("%f", f);
}


/**
 * print_string - prints a string
 * @ap: array
 * Return: No return value
 */
void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);

	printf("%s", str);
}


/**
 * get_print_op - determine print operation to use
 * @sym: a char determining type of variable to print
 *
 * Return: pointer to appropriate print function
 */
void (*get_print_op(char sym))(va_list)
{

	int i = 0;

	op_print printer[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	while (i < 4)
	{
		if (printer[i].type == sym)
			return (printer[i].f);

		i++;
	}

	return (0);
}


/**
 * print_all - prints formatted text
 * @format: string giving formats for printing
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i;
	void (*operation)(va_list);

	va_start(ap, format);

	i = 0;
	while(i < strlen(format) - 1)
	{
		operation = get_print_op(format[i]);
		
		if (operation == 0)
		{
			i++;
			continue;
		}
		operation(ap);
		printf(", ");
		i++;
	}

	operation = get_print_op(format[i]);
	operation(ap);
	printf("\n");

	va_end(ap);
}
