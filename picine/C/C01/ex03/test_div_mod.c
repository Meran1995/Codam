/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_div_mod.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mnezar-h <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 21:44:23 by mnezar-h      #+#    #+#                 */
/*   Updated: 2020/09/23 20:07:14 by mnezar-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	char nr1;
	char nr2;
	int div;
	int mod;

	a = 8;
	b = 3;
	nr1 = a + '0';
	nr2 = b + '0';
	div = a;
	mod = b;
	write(1, &nr1, 1);
	write(1, &nr2, 1);
	ft_div_mod(a, b, &div, &mod);
	write(1, &nr1, 1);
	write(1, &nr2, 1);
}
