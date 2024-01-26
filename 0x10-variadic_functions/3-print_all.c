#include "variadic_functions.h"

/**
 * handle_string - A function that prints any string arg.
 * @list: A variable of type va_list.
 * @sep: String separator.
 * @state: A checker fot the existance of a previously printed argument.
 */

void handle_string(va_list list, char *sep, int *state)
{
	char *placeholder = va_arg(list, char *);

	switch ((int)!placeholder)
	{
	case 1:
		placeholder = "(nil)";
		break;
	}
	printf("%s%s", sep, placeholder);
	*state = 1;
}

/**
 * handle_char - A function that prints any char arg.
 * @list: A variable of type va_list.
 * @sep: String separator.
 * @state: A checker fot the existance of a previously printed argument.
 */

void handle_char(va_list list, char *sep, int *state)
{
	char placeholder = va_arg(list, int);

	printf("%s%c", sep, placeholder);
	*state = 1;
}

/**
 * handle_float - A function that prints any float arg.
 * @list: A variable of type va_list.
 * @sep: String separator.
 * @state: A checker fot the existance of a previously printed argument.
 */

void handle_float(va_list list, char *sep, int *state)
{
	double placeholder = va_arg(list, double);

	printf("%s%f", sep, placeholder);
	*state = 1;
}

/**
 * handle_int - A function that prints any int arg.
 * @list: A variable of type va_list.
 * @sep: String separator.
 * @state: A checker fot the existance of a previously printed argument.
 */

void handle_int(va_list list, char *sep, int *state)
{
	int placeholder = va_arg(list, int);

	printf("%s%d", sep, placeholder);
	*state = 1;
}
/**
 * print_all - A function that prints anything.
 * @format: A list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int state = 0;
	int *statePtr = &state;
	char *separator = "";

	va_start(list, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 's':
		{
			handle_string(list, separator, statePtr);
			break;
		}
		case 'f':
		{
			handle_float(list, separator, statePtr);
			break;
		}
		case 'i':
		{
			handle_int(list, separator, statePtr);
			break;
		}
		case 'c':
		{
			handle_char(list, separator, statePtr);
			break;
		}
		default:
			break;
		}
		++i;
		if (state == 1)
			separator = ", ";
	}
	printf("\n");
	va_end(list);
}
