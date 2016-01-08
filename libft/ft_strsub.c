/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:44:25 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/08 17:44:29 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str_new;
	size_t	i;

	str_new = ft_strnew(len);
	if (str_new)
	{
		i = 0;
		while (i < len)
		{
			str_new[i] = s[start + i];
			i++;
		}
		str_new[i] = '\0';
	}
	return (str_new);
}
