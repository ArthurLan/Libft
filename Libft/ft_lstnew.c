/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 22:36:34 by alanter           #+#    #+#             */
/*   Updated: 2017/11/30 00:13:52 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//pourquoi free ?
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *lstnew;
	
	if (content == NULL)
		lstnew->content = NULL;
	else
		if(!(lstnew->content = (content*)malloc(sizeof(content*) * content_size))
				return (NULL)
	lstnew.content_size = 0;
	lstnew->next = NULL;
	return (lstnew);
}
