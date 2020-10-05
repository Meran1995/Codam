/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dm_ft_search_terms.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: dmalacov <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/26 15:17:16 by dmalacov      #+#    #+#                 */
/*   Updated: 2020/09/27 20:29:46 by dmalacov      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>		//to be removed
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*read_dict(char *filename);
void	print_translation(char *str);

int		matching(int *i, int *j, char *dict, char *str)
{
	while (dict[*i] == str[*j] && dict[*j] != '\0')
	{
		*i = *i + 1;
		*j = *j + 1;
	}
	if (str[*j] == '\0')
		return (1);
	else
		return (0);
}

char	*translate(char *str, char *filename)
{
	int		i;
	int		j;
	int		found;
	char	*dict;
	
	dict = read_dict(filename);
	i = 0;
	while (dict[i] != '\0')
	{
		j = 0;
		if (dict[i] == str[j])
		{
			found = i;
			i++;
			j++;
			if (matching(&i, &j, dict, str) == 1)
				return (&dict[found]);
			else
				i = found + 1;
		}
		else
			i++;
	}
	return NULL; // CHECK WHETHER THIS WORKS
}

void	ft_two_digits(char *str, char *two_digits)
{
	two_digits[0] = str[0];
	two_digits[1] = '0';
}

void	ft_ten_pwr_x(int position, char *ten_pwr_x)
{
	int		i;
	
	if (position % 3 == 0)
		position = 3;
	ten_pwr_x[position - position] = '1';
	i = 1;
	while (i < position)
	{
		ten_pwr_x[i] = '0';
		i++;
	}
	ten_pwr_x[position] = '\0';
}

void	ft_search_terms(char *str, int position, char *filename)
{
	char	ten_pwr_x[position + 1];
	char	two_digits[3];
	char	*ret;

	if (position % 3 == 1 && str[1] != '\0')
	{
		ft_two_digits(str, two_digits);
		ret = translate(two_digits, filename);
		printf("6. %s, %d\n", two_digits, position);
		print_translation(ret);
		if (position != 1)
			write(1, " ", 1);
	}
	else if (position % 3 == 1)
	{
		if (str[0] != 0)
		{
			ret = translate(str, filename);
			printf("2. %s, %d\n", str, position);
			print_translation(ret);
		}
		ft_ten_pwr_x(position, ten_pwr_x);
		ret = translate(ten_pwr_x, filename);
		printf("3. %s, %d\n", ten_pwr_x, position);
		print_translation(ret);
		write(1, " ", 1);
	}
	else if (position % 3 == 0 && str[0] != '0')
	{
		ret = translate(str, filename);
		printf("4. %s, %d\n", str, position);
		print_translation(ret);
		ft_ten_pwr_x(position, ten_pwr_x);
		ret = translate(ten_pwr_x, filename);
		printf("5. %s, %d\n", ten_pwr_x, position);
		print_translation(ret);
		write(1, " ", 1);
	}
	else if (position == 1)
	{
		ret = translate(str, filename);
		printf("1. %s, %d\n", str, position);
		print_translation(ret);
	}
}
//	
//	
//	if (str[0] != '0' || (str[0] == '0' && position % 3 == 1))
//	{
//		if (position % 3 == 2 && (str[0] != 1 && str[0] != 0))
//		{
//			ft_two_digits(str, two_digits);
//			ret = translate(two_digits, filename);
//			printf("sending to print 1: %s\n", two_digits);
//			print_translation(ret);
//			if (position != 2)
//				write(1, " ", 1);
//		}
//		else if (str[0] != '0' || (str[0] == '0' && position == 1))
//		{
//			ret = translate(str, filename);
//			printf("sending to print 2: %s\n", str);
//			print_translation(ret);
//			if (position != 1)
//				write(1, " ", 1);
//		}
//		if (position % 3 == 0 && str[0] != 0)
//		{
//			ft_ten_pwr_x(position, ten_pwr_x);
//			ret = translate(ten_pwr_x, filename);
//			printf("sending to print 3: %s\n", ten_pwr_x);
//			print_translation(ret);
//			write(1, " ", 1);
//		}
//		if (position % 3 == 1 && position != 1)
//		{
//			ft_ten_pwr_x(position, ten_pwr_x);
//			ret = translate(ten_pwr_x, filename);
//			printf("sending to print 4: %s\n", ten_pwr_x);
//			print_translation(ret);
//			write(1, " ", 1);
//		}
//	}
//}
