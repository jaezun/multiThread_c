/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:08:17 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/20 20:08:19 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** copies memory area, no more than n bytes, from s2[src] to s1[dst]
*/

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char*)s1 + i) = *((unsigned char*)s2 + i);
		i++;
	}
	return (s1);
}
