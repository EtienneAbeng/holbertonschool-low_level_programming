#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/* Déclaration de la structure pick_al */
typedef struct pick_all 
{
	char let;
	void (*f)(va_list);
} pick_al;

/**
 * print_int - Imprime un entier.
 * @list: Liste d'arguments variables.
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_char - Imprime un caractère.
 * @list: Liste d'arguments variables.
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_float - Imprime un nombre à virgule flottante.
 * @list: Liste d'arguments variables.
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - Imprime une chaîne de caractères.
 * @list: Liste d'arguments variables.
 */
void print_string(va_list list)
{
	char *st;
	st = va_arg(list, char *);
	if (st == NULL)
	{
		printf("(nil)");
		return;
	}
    printf("%s", st);
}

/**
 * print_all - Imprime une liste d'arguments variables en fonction de la chaîne de format.
 * @format: Chaîne de format.
 * @...: Liste d'arguments variables.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	va_list list;
	char *separator = "";

    /* Déclaration et initialisation de la structure pick_al */
	pick_al pik[] = 
	{
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		while (pik[j].let != '\0')
		{
			if (pik[j].let == format[i])
			{
				printf("%s", separator);
				pik[j].f(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(list);
	printf("\n");
}
