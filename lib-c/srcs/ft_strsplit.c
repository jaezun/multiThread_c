/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:14:55 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/20 20:14:57 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char		*ft_split(const char *s, int *i, char c)
{
	char	*str3;
	int		flag;
	int		j;

	j = 0;
	flag = 0;
	str3 = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	while (s[*i] && flag == 0)
	{
		if (s[*i] == c)
			flag = 1;
		else
		{
			str3[j] = s[*i];
			j++;
		}
		*i += 1;
	}
	str3[j] = '\0';
	return (str3);
}

char			**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;
	char	**str2;

	i = 0;
	j = 0;
	k = 0;
	str = (char**)malloc(sizeof(char*) * ft_strlen(s) + 1);
	str2 = str;
	while (s[j++])
	{
		str2[j] = ft_split(s, &i, c);
		if (str2[j][0])
		{
			str[k] = str2[j];
			k++;
		}
	}
	str[k] = NULL;
	return (str);
}
