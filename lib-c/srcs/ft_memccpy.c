/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:07:09 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/21 14:41:51 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** copies memory area, no more than n bytes from s2[src] to s1[dst],
** stopping when char c is found
*/

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			i;
	char			*dst;
	const char		*src;

	dst = s1;
	src = s2;
	i = 0;
	while (i < n)
	{
		*((unsigned char*)dst + i) = *((unsigned char*)src + i);
		if (*((unsigned char*)src + i) == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
