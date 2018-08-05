#include "../../inc/header.h"

void	my_aff_tab_num(int arr[], int size)
{
  int	x;

  x = -1;
  while (++x < size)
    my_putchar(arr[x] + '0');
}
