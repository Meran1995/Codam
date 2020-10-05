/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_rev_int_tab.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mnezar-h <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 17:43:19 by mnezar-h      #+#    #+#                 */
/*   Updated: 2020/10/03 18:46:06 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int num[] = {10, 20, 30, 40};
	int size;
	int i;

	i = 0;
	size = 4;
	ft_rev_int_tab(num, size);
	while (i < size)
	{
		printf("%d ", num[i]);
		i++;
	}
	return (0);
}
