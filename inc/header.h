#ifndef __HEADER_H__
#define __HEADER_H__

#include <unistd.h>
#include <stdarg.h>

void	my_putchar(char c); /* Prints a char. */
void	my_putstr(char *str); /* Prints a string. */
int	my_strlen(char *str); /* Returns the length of a string. */
int	my_const_strlen(const char *str); /* Returns the length of a string. */
void	my_aff_tab_num(int arr[], int size); /* Prints an integer array. */
void	my_put_nbr(int nbr); /* Prints a number. */
void	my_put_unsigned_nbr(unsigned int  nbr); /* Prints an unsigned int */
void	my_putnbr_base(int nbr, char *base);/*Converts number to other bases*/
void	my_printf(const char *str, ...); /* Main function. */
void	switch_opt(const char *str, va_list *args);/*Parses the options.*/
void	arg_i(va_list *args); /* Prints an int. */
void	arg_c(va_list *args); /* Prints a char. */
void	arg_s(va_list *args); /* Prints a string. */
void	arg_o(va_list *args); /* Converts the number to octal. */
void	arg_u(va_list *args); /* Prints an unsigned int. */
void	arg_x(va_list *args); /* Converts the number to hexadecimal. */
void	arg_X(va_list *args); /* Converts the number to HEXADECIMAL. */
void	arg_b(va_list *args); /* Converts the number to binary. */

#endif
