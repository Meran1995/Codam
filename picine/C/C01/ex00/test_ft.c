/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mnezar-h <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 17:32:06 by mnezar-h      #+#    #+#                 */
/*   Updated: 2020/09/17 17:32:08 by mnezar-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int ab;

	ab = 55;
	write(1, &ab, 1);
	ft_ft(&ab);
	write(1, &ab, 1);
	return (0);
}
