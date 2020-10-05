/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush03.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbax <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/13 11:21:15 by jbax          #+#    #+#                 */
/*   Updated: 2020/09/13 14:42:44 by rgoldber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int n);
void	row_01(int x);

void	row_middle_one(int x, int y)
{
	int		count;

	count = 0;
	while (count < y - 2)
	{
		write(1, "B", 1);
		if (x > 2)
		{
			ft_putchar(' ', x - 2);
		}
		if (x > 1)
		{
			write(1, "B", 1);
		}
		count++;
		write(1, "\n", 1);
	}
}

void	rush(int x, int y)
{
	int		count;

	count = 0;
	row_01(x);
	if (y > 2)
	{
		row_middle_one(x, y);
	}
	if (y > 1)
	{
		row_01(x);
	}
}
