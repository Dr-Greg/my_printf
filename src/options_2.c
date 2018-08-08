#include "../inc/header.h"

void			    arg_u(va_list *args)
{
    unsigned int	nbr;

    nbr = va_arg(*args, unsigned int);
    my_put_unsigned_nbr(nbr);
}

void		       	arg_x(va_list *args)
{
    int	       		nbr;

    nbr = va_arg(*args, int);
    my_putnbr_base(nbr, "0123456789abcdef");
}

void   			    arg_X(va_list *args)
{
    int	       		nbr;

    nbr = va_arg(*args, int);
    my_putnbr_base(nbr, "0123456789ABCDEF");
}

void   			    arg_b(va_list *args)
{
    int		    	nbr;

    nbr = va_arg(*args, int);
    my_putnbr_base(nbr, "01");
}
