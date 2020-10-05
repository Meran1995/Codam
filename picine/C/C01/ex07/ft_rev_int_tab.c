/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mnezar-h <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 17:43:11 by mnezar-h      #+#    #+#                 */
/*   Updated: 2020/09/25 20:28:07 by mnezar-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;
	int max;

	i = 0;
	max = size - 1;
	while (i <= max / 2)
	{
		temp = tab[i];
		tab[i] = tab[max - i];
		tab[max - i] = temp;
		i++;
	}
}
