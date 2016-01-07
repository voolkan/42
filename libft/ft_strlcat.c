/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:23:34 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/07 17:43:00 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	total_size;
	size_t	max;

	total_size = ft_strlen(dst) + ft_strlen(src);
	max = size - ft_strlen(dst) - 1 * sizeof(char);
	ptr = dst;
	i = 0;
	while (*ptr)
	{
		if (i++ >= size)
			return (size + ft_strlen(src));
		ptr++;
	}
	if (i == size)
		return (size + ft_strlen(src));
	i = 0;
	while (i < max && src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (total_size);
}
