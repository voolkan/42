/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:17:30 by scluzeau          #+#    #+#             */
/*   Updated: 2015/12/04 15:17:32 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	size_t	i;
	char	*buffer;

	buffer = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (i < len)
	{
		buffer[i] = ((char*)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((char*)dst)[i] = buffer[i];
		i++;
	}
	free(buffer);
	return (dst);
}
