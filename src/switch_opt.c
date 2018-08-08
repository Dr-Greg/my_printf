#include "../inc/header.h"

void    switch_opt(const char *str, va_list *args)
{
    int i;

    i = -1;
    while (str[++i] !=  '\0')
    {
        if (str[i] == '%')
        {    switch (str[++i])
            {
            case 'i': case 'd': arg_i(args); break;
            case 'c': arg_c(args); break;
            case 's': arg_s(args); break;
            case 'o': arg_o(args); break;
            case 'u': arg_u(args); break;
            case 'x': arg_x(args); break;
            case 'X': arg_X(args); break;
            case 'b': arg_b(args); break;
            case '%': my_putchar(str[i]); break;
            }
            if (++i >= my_strlen(str))
                return;
        }                                                                                                                          
        if (str[i] == '%')
            --i;
        else
            my_putchar(str[i]);
    }
}
