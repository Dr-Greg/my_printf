#include "../../inc/header.h"

int    	my_strlen(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0') {}
  return (i);
}

int    	my_const_strlen(const char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0') {}
  return (i);
}
