/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_putstr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mnezar-h <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 13:02:07 by mnezar-h      #+#    #+#                 */
/*   Updated: 2020/09/25 20:23:33 by mnezar-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "Hello";

	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}
