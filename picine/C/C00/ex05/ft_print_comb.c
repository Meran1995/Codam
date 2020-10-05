/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mnezar-h <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 18:35:21 by mnezar-h      #+#    #+#                 */
/*   Updated: 2020/09/16 16:44:08 by mnezar-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_things(int a, int b, int c);
void	comma_remover(int a);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;
	int count;

	count = '0';
	a = '0';
	b = a + 1;
	c = b + 1;
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				write_things(a, b, c);
				comma_remover(a);
				c++;
			}
			b++;
			c = b + 1;
		}
		b = a + 1;
		a++;
	}
}

void	write_things(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	comma_remover(int a)
{
	if (a != '7')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
