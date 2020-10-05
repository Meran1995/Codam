/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_translation.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: dmalacov <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 16:47:51 by dmalacov      #+#    #+#                 */
/*   Updated: 2020/09/27 19:33:27 by dmalacov      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>	//remove before submitting

void	process_output(char *str)
{
	int	i;
	int	spaces;

	i = 0;
	while (str[i] != ':' && str[i] != '\n')
	{
		i++;
	}
	i++;
	while (str[i] == ' ' && str[i] != '\n')
	{
		i++;
	}
	spaces = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && spaces == 0)
		{
			write(1, &str[i], 1);
			spaces = 1;
		}
		if (str[i] != ' ')
		{
			write(1, &str[i], 1);
			if (spaces == 1)
				spaces = 0;
		}
		i++;
	}
}

void	print_translation(char *str)
{
	int		i;
	char	*line;
	int		len;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	len = i;
	line = (char*)malloc(len + 1);
	i = 0;
	while (i < len)
	{
		line[i] = str[i];
		i++;
	}
	line[len] = '\0';
	printf("sending to processing: %s\n", line);
	process_output(line);
}
