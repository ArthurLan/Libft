/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:44:58 by alanter           #+#    #+#             */
/*   Updated: 2017/11/29 17:52:27 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	char	*cdst;
	char	*csrc;

	cdst = (char *)dst;
	csrc = (char *)src;
	if (n != 0 || dst != src)
	{
		if (dst < src)
			ft_memcpy(dst, src, n);
		else
		{
			while (n)
			{
				cdst[n - 1] = csrc[n - 1];
				n--;
			}
		}
	}
	return (dst);
}
