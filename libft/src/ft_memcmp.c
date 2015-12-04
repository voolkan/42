/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:16:36 by scluzeau          #+#    #+#             */
/*   Updated: 2015/12/04 15:16:37 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n)
	{
		c1 = ((unsigned char*)s1)[i];
		c2 = ((unsigned char*)s2)[i];
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}
