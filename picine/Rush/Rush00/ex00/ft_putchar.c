/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tt.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbax <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 16:14:51 by jbax          #+#    #+#                 */
/*   Updated: 2020/09/13 20:06:56 by mnezar-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		write(1, &c, 1);
		i++;
	}
}

void	row_01(int x)
{
	if (x > 0)
	{
		write(1, "A", 1);
	}
	if (x > 2)
	{
		ft_putchar('B', x - 2);
	}
	if (x > 1)
	{
		write(1, "C", 1);
	}
	write(1, "\n", 1);
}
