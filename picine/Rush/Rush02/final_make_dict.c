/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dm_read_to_dict.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dmalacov <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/26 13:27:56 by dmalacov      #+#    #+#                 */
/*   Updated: 2020/09/27 19:25:57 by dmalacov      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>							// don't forget to remove

int		size_of_dict(char *filename)
{
	int		fd;
	char	*temp;
	int		buf_size;
	int		i;

	/* finding out the size of the dictionary file by repeatedly printing 10 bytes 
	 * until reaching the end of the file */
	buf_size = 10;
	temp = (char*)malloc(buf_size + 1);
	fd = open(filename, O_RDONLY);	//change into a path variable
	if (fd == -1)
		return (-1);					// Implement error function
	i = 1;
	while (read(fd, temp, buf_size) != 0)
	{
		temp[buf_size] = '\0';
		i++;
	}
	free(temp);
	close(fd);
	return (i * 10);
}

char	*read_dict(char *filename)
{
	int		fd;
	char	*dict;
	int		buf_size;

	buf_size = size_of_dict(filename);
	/* allocating  memory using malloc and the size that we just checked
	 * and reading/copying the dictionary into variable "dict" */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	dict = (char*)malloc(buf_size + 1);
	read(fd, dict, buf_size);
	dict[buf_size] = '\0';
	close(fd);
	return (dict);
}
