/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 17:30:18 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/26 17:30:21 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** convert int to string
*/

char	*ft_itoa(int n)
{
	char	*stritoa;
	int		tmp;
	int		i;
	int		sign;

	sign = ((n > 0) ? 1 : -1);
	i = ((sign == -1) ? 1 : 0);
	tmp = n;
	while (tmp)
	{
		i++;
		tmp = tmp / 10;
	}
	stritoa = ft_strnew(i);
	tmp = n;
	if (stritoa)
	{
		while (i--)
		{
			stritoa[i] = ((tmp % 10) * sign) + '0';
			tmp = tmp / 10;
		}
		stritoa[0] = ((sign == -1 && n != 0) ? '-' : stritoa[0]);
	}
	return (stritoa);
}
