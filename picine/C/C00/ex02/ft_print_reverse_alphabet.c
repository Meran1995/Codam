/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mnezar-h <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 15:28:58 by mnezar-h      #+#    #+#                 */
/*   Updated: 2020/09/23 19:35:05 by mnezar-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alfabet(void)
{
	int		c;

	c = 122;
	while (c > 96)
	{
		write(1, &c, 1);
		c--;
	}
}
