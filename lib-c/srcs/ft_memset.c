/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:08:34 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/25 16:42:29 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** fills first len bytes of memory area pointed by b with the constant byte c
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;

	if (b == NULL)
		return (b);
	i = 0;
	while (i < len)
	{
		*((unsigned char*)b + i) = (unsigned char)c;
		++i;
	}
	return (b);
}
