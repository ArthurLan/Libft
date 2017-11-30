/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:38:22 by alanter           #+#    #+#             */
/*   Updated: 2017/11/29 20:29:42 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	int		lengh;

	if (haystack == NULL || needle == NULL)
		return (NULL);
	h = (char *)haystack;
	n = (char *)needle;
	lengh = ft_strlen(needle);
	if (lengh == 0 || h == n)
		return (h);
	while (len && (int)len > lengh)
	{
		if (ft_strncmp(h, n, lengh - 1) == 0)
			return (h);
		h++;
		len--;
	}
	return (NULL);
}
