/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:15:50 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/04 14:17:14 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memalloc(size_t size)
{
	void	*addr;
	size_t	i;

	addr = malloc(size);
	if (addr)
	{
		i = 0;
		while (i < size)
			((char *)addr)[i++] = 0;
	}
	return (addr);
}
