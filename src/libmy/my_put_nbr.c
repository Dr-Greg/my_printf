#include "../../inc/header.h"

void	my_put_nbr(int  nbr)
{
  if(nbr < 0)
    {
      if (nbr == -2147483648)
          my_putstr("-2147483648");
      else
        {
          my_putchar('-');
          nbr = -nbr;
        }
    }
  if(nbr >= 0 && nbr <= 9)
    my_putchar(nbr + '0');
  if(nbr > 9)
    {
      my_put_nbr(nbr / 10);
      my_put_nbr(nbr % 10);
    }
}

void	my_put_unsigned_nbr(unsigned int  nbr)
{
  if(nbr <= 9)
    my_putchar(nbr + '0');
  if(nbr > 9)
    {
      my_put_nbr(nbr / 10);
      my_put_nbr(nbr % 10);
    }
}
