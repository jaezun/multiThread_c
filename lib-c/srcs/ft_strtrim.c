/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:14:55 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/20 20:14:57 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*f;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	k = ft_strlen(s) - 1;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j < k)
		j++;
	while ((s[k] == ' ' || s[k] == '\n' || s[k] == '\t') && k > j)
		k--;
	f = ft_strnew((k + 1) - j);
	if (k > j)
	{
		while (j < (k + 1))
		{
			f[i] = s[j];
			i++;
			j++;
		}
	}
	return (f);
}
