#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define UNUSED(X) (void)(x)
#define BUFF _SIZE 1024

/* FLAGS */
#define F _PLUS 2
#define F _ZERO 4
#define F _MINUS 1
#define F _MASH 8
#define F _SPACE 16

/* SIZES */
#define S _SHORT 1
#define S _LONG 2
/**
 * sruct fmt - struct op
 *
 * @fmt: it's the format.
 * @fn: The function associated.
 */
struct fmt
{
	char int;
	int (*fm)(va_list, char[], int, int, int, int);
};
/**
 * typedef struct fmt fmt_I - struct op
