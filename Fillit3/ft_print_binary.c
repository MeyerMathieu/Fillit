/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_binary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 13:27:22 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/25 17:05:57 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_putstr_sp(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		if (str[i + 1] != '\0')
			ft_putchar(' ');
		i++;
	}
}

void	ft_print_binary(unsigned int i, int index)
{
	int		j;

	static char buffer [1 + sizeof(unsigned long int) * 8] = { 0 };
	char *p=buffer-1+sizeof (unsigned long int)*8;
	do { *--p = '0' + (i & 1); i >>= 1; } while (i);
	j = (32 - ft_strlen(p));
	while (j > 0)
	{
		ft_putchar('0');
		ft_putchar(' ');
		j--;
	}
	ft_putstr_sp(p);
	ft_putchar('\n');
}

void	ft_print_grid(unsigned int *grid)
{
	int		i;

	i = 0;
	while (i < 26)
	{
		ft_print_binary(grid[i], 1);
		i++;
	}
}