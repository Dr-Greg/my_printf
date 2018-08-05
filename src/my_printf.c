#include "../inc/header.h"

void		my_printf(const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	switch_opt(str, &args);
	va_end(args);
}
