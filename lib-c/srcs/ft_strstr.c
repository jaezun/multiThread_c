/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:14:55 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/20 20:14:57 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	char	*to_find_temp;
	char	*str_temp;

	to_find_temp = (char*)to_find;
	if (*to_find_temp == '\0')
		return ((char*)str);
	while (*str != '\0')
	{
		if (*str == *to_find_temp)
		{
			str_temp = (char*)str;
			while (*str_temp == *to_find_temp || *to_find_temp == '\0')
			{
				if (*to_find_temp == '\0')
					return ((char*)str);
				str_temp++;
				to_find_temp++;
			}
			str++;
		}
		to_find_temp = (char*)to_find;
		str++;
	}
	return (NULL);
}
