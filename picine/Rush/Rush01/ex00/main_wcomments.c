#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
	// There are two parameters passed to main(). The first parameter is the number of items on the command line (int argc). Each argument on the command line is separated by one or more spaces, 
	//and the operating system places each argument directly into its own null-terminated string. 
	//The second parameter passed to main() is an array of pointers to the character strings containing each argument (char *argv[]).

int		main(int argc, char *argv[])
{
	// declare an iterator for future use.
	int i;

	i = 0;
	// if argc is smaller or equal to 1, print error message. Why? Because argc 0 contains the name of the invoked program without arguments.
	if (argc <= 1)
	// note: the main() routine can check argc to see how many arguments the user specified. The program can find out its own name as it was invoked: it is stored in the argv[0] string. The arguments from the command line are not automatically converted: the characters are just copied into the argv strings.
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
	
	// if at execution of the program a parameter was provided, this will always run. Also try to  populate the necessary arrays with the values, not addresses, of argv/argc.
	if (argc > 1)
	{
		// declare the arrays to keep the value of the command line parameters.
		int colup[3];
		int coldown[3];
		int rowleft[3];
		int rowright[3];
		
		// populate an index of each array to test.
		colup[0] = *argv[1];
		coldown[0] = *argv[3];
		rowleft[0] = *argv[5];
		rowright[0] = *argv[8];
		
		// print the value assigned to each object. we went from CLP to argv[], dereferenced the address and then initiated objects in our array with their value.
		ft_putchar(colup[0]);
		ft_putchar(coldown[2]);
		ft_putchar(rowleft[2]);
		ft_putchar(rowright[2]);
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
