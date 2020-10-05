/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbax <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 11:35:37 by jbax          #+#    #+#                 */
/*   Updated: 2020/09/13 20:07:29 by mnezar-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int n);
void	row_01(int x);
void	row_middle_one(int x, int y);
void	rush(int x, int y);

int		main(void)
{
	rush(5, -2);
	return (0);
}
