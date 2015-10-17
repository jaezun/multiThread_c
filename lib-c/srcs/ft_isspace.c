/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 17:30:18 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/26 17:30:21 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** checks for spaces char incl.
** space[ ], horizontal tab [\t], vertical tab[\v], escape sequence[\f],
** return[\r](MacOS), return[\n](Unix), return[\r\n](Windows)
*/

int		ft_isspace(int c)
{
	size_t		i;
	char		*spaces;

	i = 0;
	spaces = " \t\v\f\r\n";
	while (spaces[i] != '\0')
	{
		if (c == spaces[i])
			return (1);
		++i;
	}
	return (0);
}
