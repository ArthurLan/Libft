/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:30:52 by alanter           #+#    #+#             */
/*   Updated: 2017/11/29 17:51:15 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*chrs;

	chrs = (char *)s;
	i = 0;
	while (i < n)
	{
		if (chrs[i] == c)
			return (&chrs[i]);
		i++;
	}
	return (NULL);
}
