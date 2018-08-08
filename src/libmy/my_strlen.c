#include "../../inc/header.h"

int   my_strlen(const char *str)
{
  int i;

  i = -1;
  while (str[++i] != '\0') {}
  return (i);
}
