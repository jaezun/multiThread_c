/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:33:24 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/22 16:33:50 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dstorigin;
	size_t		d;

	i = 0;
	dstorigin = ft_strlen(dst);
	d = 0;
	if (dstorigin > size)
		d = size;
	if (dstorigin <= size)
	{
		d = dstorigin;
		while (src[i] != '\0' && d + i < size - 1)
		{
			dst[d + i] = src[i];
			i++;
		}
		dst[d + i] = '\0';
	}
	return (d + ft_strlen(src));
}
