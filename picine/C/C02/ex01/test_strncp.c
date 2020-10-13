/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strncp.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 23:00:43 by anonymous     #+#    #+#                 */
/*   Updated: 2020/10/06 23:00:43 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[25] = "Lets get coding guys!";
	char dest[25];
	int n;

	n = 25;
	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%d\n", n);
	ft_strncpy(dest, src, n);
	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%d\n", n);
	return (0);
}