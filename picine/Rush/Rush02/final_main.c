/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   connected_dm_mnh_main.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dmalacov <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 14:16:55 by dmalacov      #+#    #+#                 */
/*   Updated: 2020/09/27 19:11:33 by dmalacov      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	argument_cutter(char *filename, char *input);

/*
	1.	2 argument: first argument is the new reference dctoinary
	2.	if the argument is not a positive number then tpe a "Error"
*/

int		inp_check(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int 	ret;
	char	filename[17];
	char	*file;

	if (argc == 2)
	{
		file = filename;
		file = "numbers.dict.txt";
		ret = inp_check(argv[1]);
		if (ret == 1)
			argument_cutter(file, argv[1]);
	}
	else if (argc == 3)
	{
		write(1, "There are 2 arguments.\n", 24);	//delete this line
		ret = inp_check(argv[2]);
		if (ret == 1)
			argument_cutter(argv[1], argv[2]);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
