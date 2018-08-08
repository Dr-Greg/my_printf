#include "../../inc/header.h"

void  my_putnbr_base(int nbr, char *base)
{
   int	lent;

  lent = my_strlen(base);
  if (nbr < 0)
    {
      nbr = -nbr;
      my_putchar('-');
    }
  if (nbr == 0)
    return;
  else
    my_putnbr_base(nbr / lent, base);
  my_putchar(base[nbr % lent]);
}
