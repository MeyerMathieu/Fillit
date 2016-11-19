/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_up_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 11:24:51 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/19 11:35:32 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

piece	ft_set_up_left(piece a)
{
	while (a.l1 < 128)
	{
		a = ft_shift_left(a);
		a = ft_shift_up(a);
	}
	return (a);
}