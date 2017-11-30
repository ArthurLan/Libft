/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:36:15 by alanter           #+#    #+#             */
/*   Updated: 2017/11/29 19:02:24 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ret;
	int		i;
	int		j;
	int		size;

	i = 0;
	if (s == NULL)
		return (NULL);
	j = ft_strlen(s) - 1;
	while (ft_isspace(s[i]))
		i++;
	if (s[i] == 0)
		return ((char*)&s[i]);
	while (s[j] == 32 || s[j] == '\n' || s[j] == '\t')
		j--;
	size = j - i + 1;
	if (!(ret = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	j = 0;
	while (j < size)
		ret[j++] = s[i++];
	ret[j] = 0;
	return (ret);
}
