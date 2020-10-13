/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strcpy.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 00:55:27 by anonymous     #+#    #+#                 */
/*   Updated: 2020/10/06 00:55:27 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[20] = "I love basketball";
	char dest[20];

	printf("%s\n", src);
	ft_strcpy(dest, src);
	printf("%s\n", src);
	printf("%s\n", dest);
	return (0);
}
