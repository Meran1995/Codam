#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc <= 1)
	{
		char para_error1[] = "Error, no / erroneous parameters.";
		while (para_error1[i] != '\0')
		{
			ft_putchar(para_error1[i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
	}

	int *square = malloc(32 * sizeof(int));

	if (argc > 1)
	{
		int colup[3];
		int coldown[3];
		int rowleft[3];
		int rowright[3];
		
		colup[0] = *argv[1];
		coldown[0] = *argv[2];
		rowleft[0] = *argv[3];
		rowright[0] = *argv[4];
		
		ft_putchar(colup[0]);
		ft_putchar(coldown[0]);
		ft_putchar(rowleft[0]);
		ft_putchar(rowright[0]);
	}
	return (0);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}
