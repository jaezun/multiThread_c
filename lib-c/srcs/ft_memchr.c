/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 10:26:06 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/25 13:56:19 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** scans first n bytes of memory area pointed to by s
** for the first instance of c.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)(s + i) == (unsigned char)c)
			return ((unsigned char*)s + i);
		i++;
	}
	return (NULL);
}
