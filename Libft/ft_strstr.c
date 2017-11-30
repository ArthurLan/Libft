/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:42:47 by alanter           #+#    #+#             */
/*   Updated: 2017/11/29 20:25:43 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*h;
	char	*n;
	int		len;

	h = (char *)haystack;
	n = (char *)needle;
	len = ft_strlen(needle);
	if (len == 0)
		return (h);
	while (*h != 0)
	{
		if (ft_strncmp(h, n, len - 1) == 0)
			return (h);
		h++;
	}
	return (NULL);
}
