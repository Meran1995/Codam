/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ultimate_div_mod.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mnezar-h <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 22:21:51 by mnezar-h      #+#    #+#                 */
/*   Updated: 2020/09/23 20:08:08 by mnezar-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a_intro;
	int b_intro;
	int a;
	int b;

	a_intro = 50;
	b_intro = 55;
	a = a_intro;
	b = b_intro;
	write(1, &a_intro, 1);
	write(1, &b_intro, 1);
	ft_ultimate_div_mod(&a, &b);
	write(1, &a_intro, 1);
	write(1, &b_intro, 1);
}
