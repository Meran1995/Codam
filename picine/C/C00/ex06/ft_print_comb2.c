/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mnezar-h <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 17:24:59 by mnezar-h      #+#    #+#                 */
/*   Updated: 2020/09/17 14:35:07 by mnezar-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert();

void	ft_print_comb(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			convert(a, b);
			b++;
			if (a != 98)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
		}
		a++;
		b = a + 1;
	}
}

void	convert(int a, int b)
{
	char ab[4];

	ab[0] = a / 10 + '0';
	ab[1] = a % 10 + '0';
	ab[2] = b / 10 + '0';
	ab[3] = b % 10 + '0';
	write(1, &ab[0], 1);
	write(1, &ab[1], 1);
	write(1, " ", 1);
	write(1, &ab[2], 1);
	write(1, &ab[3], 1);
}
