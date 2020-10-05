/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mnezar-h <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 20:40:43 by mnezar-h      #+#    #+#                 */
/*   Updated: 2020/09/24 16:59:02 by mnezar-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_swap(int *a, int *b);

int     main(void)
{
	int a;
	int b;
	int *swap_pointer_a;
	int *swap_pointer_b;

	a = 50;
	b = 51;
	swap_pointer_a = &a;
	swap_pointer_b = &b;
	write(1, &a, 1);
	write(1, &b, 1);
	ft_swap(swap_pointer_a, swap_pointer_b);
	write(1, &a, 1);
	write(1, &b, 1);
	return (0);
}
