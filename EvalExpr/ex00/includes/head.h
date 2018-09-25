#ifndef HEAD_H
# define HEAD_H

# include <stdlib.h>
# include <unistd.h>

int	operators_counter(char **str);
int ParseFactors(char** str);
int ParseSummands(char** str);
int eval_expr(char* str);

void    ft_putchar(char c);
void    ft_putnbr(int n);
int		str_length(char *str);
char 	*space_rmover(char *str);
#endif