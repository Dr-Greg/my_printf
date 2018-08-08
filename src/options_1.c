#include "../inc/header.h"

void        arg_i(va_list *args)
{
    int     nbr;

    nbr = va_arg(*args, int);
    my_put_nbr(nbr);
}

void        arg_c(va_list *args)
{
    char    c;

    c = va_arg(*args, int);
    my_putchar(c);
}

void        arg_s(va_list *args)
{
    char    *arr;

    arr = va_arg(*args, char *);
    my_putstr(arr);
}

void        arg_o(va_list *args)
{
    int     nbr;

    nbr = va_arg(*args, int);
    my_putnbr_base(nbr, "01234567");
}
