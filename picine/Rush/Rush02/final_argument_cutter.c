/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   connected_dm_r_argument_cutter.c                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dmalacov <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 14:23:50 by dmalacov      #+#    #+#                 */
/*   Updated: 2020/09/27 19:12:04 by dmalacov      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_search_terms(char *str, int position, char *filename);

/* Takes input (char array) from main and cuts it into separate pieces */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	cut(char *to_print, char *input, int input_length, int i)
{
	to_print[0] = input[i];
	if ((input_length - i) % 3 == 2 && input[i] == '1')
	{
		to_print[1] = input[i + 1];
		to_print[2] = '\0';
	}
	else
		to_print[1] = '\0';
}

/* Main argument cutter function takes input (char array) and loops over the input */
void	argument_cutter(char *filename, char *input)
{
	int		i;
	int		input_length;
	char	to_print[3] = "";

	input_length = ft_strlen(input);
	i = 0;
	if (input_length == 1 && input[0] == '0')
	{
		printf("sending out: %s, %d\n", input, input_length - i);
		ft_search_terms(input, input_length - i, filename);
	}
	else
	{
		while (input[i] != '\0')
		{
			cut(to_print, input, input_length, i);
			if ((input_length - i) % 3 == 2 && input[i] == '1')
			{
				printf("sending out: %s, %d\n", to_print, (input_length - i - 1));
				ft_search_terms(to_print, (input_length - i - 1), filename);
				i++;
			}
			else if (!(to_print[0] == '0' && (input_length - i) == 1))
				printf("sending out: %s, %d\n", to_print, (input_length - i));
				ft_search_terms(to_print, (input_length - i), filename);
			i++;
		}
	}
}
