/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:34:21 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/26 14:56:22 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*to_find == '\0')
		return ((char*)str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i] == to_find[j] && i < n)
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return ((char*)str + i - j);
		}
		i = (i - j + 1);
	}
	return (NULL);
}
