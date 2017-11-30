/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:21:56 by alanter           #+#    #+#             */
/*   Updated: 2017/11/29 18:07:02 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*d;

	d = (char *)s;
	i = ft_strlen(s);
	if (c == 0)
		return (&d[i]);
	while (i != 0)
	{
		if (d[i] == c)
			return (&d[i]);
		i--;
	}
	return (NULL);
}
