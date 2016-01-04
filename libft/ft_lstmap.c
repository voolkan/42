/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:15:17 by scluzeau          #+#    #+#             */
/*   Updated: 2015/12/04 15:15:20 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void		delelem(void *content, size_t content_size)
{
	if (content_size > 0)
		ft_memdel(&content);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*next;

	next = NULL;
	if (lst->next)
	{
		next = ft_lstmap(lst->next, f);
		if (!next)
			return (NULL);
	}
	new_list = ft_lstnew(lst->content, lst->content_size);
	new_list = f(new_list);
	if (new_list)
	{
		if (next)
			ft_lstadd(&next, new_list);
	}
	else
	{
		if (next)
			ft_lstdel(&next, &delelem);
		return (NULL);
	}
	return (new_list);
}
