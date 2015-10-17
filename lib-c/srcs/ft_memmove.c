/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:08:17 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/25 18:35:45 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*s_temp;
	size_t		i;

	s_temp = (char*)malloc(n);
	if (s1 == NULL || s2 == NULL)
		return (s1);
	if (s_temp == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		s_temp[i] = *((char*)s2);
		i++;
		s2++;
	}
	s1 = ft_memcpy(s1, s_temp, n);
	free(s_temp);
	return (s1);
}
