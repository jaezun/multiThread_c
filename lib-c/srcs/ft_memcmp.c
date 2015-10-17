/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:49:56 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/21 14:53:00 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** compates first n bytes of memory areas s1 and s2.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*s1_temp;
	char		*s2_temp;

	i = 0;
	s1_temp = (char*)s1;
	s2_temp = (char*)s2;
	if (n != 0)
	{
		while (i < (n - 1) && s1_temp[i] == s2_temp[i])
			i++;
		return (((unsigned char)s1_temp[i]) - (unsigned char)s2_temp[i]);
	}
	else
		return (0);
}
