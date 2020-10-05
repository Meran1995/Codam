/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_ultimate.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mnezar-h <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 19:03:07 by mnezar-h      #+#    #+#                 */
/*   Updated: 2020/09/22 21:33:47 by mnezar-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int     main(void)
{
    int ab;
    int *abb;
	int **abb2;
    int ***abb3;
    int ****abb4;
    int *****abb5;
    int ******abb6;
    int *******abb7;
    int ********abb8;
    int *********abb9;
    ab = 50;
    abb = &ab;
    abb2 = &abb;
    abb3 = &abb2;
    abb4 = &abb3;
    abb5 = &abb4;
    abb6 = &abb5;
    abb7 = &abb6;
    abb8 = &abb7;
    abb9 = &abb8;
    write(1, &ab, 1);
    write(1, "\n", 1);
    ft_ultimate_ft(abb9);
    write(1, &ab, 1);
    return (0);
}
