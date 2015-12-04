/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:23:20 by scluzeau          #+#    #+#             */
/*   Updated: 2015/12/04 15:23:22 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_new;
	char	*ptr;

	str_new = ft_strnew(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str_new)
	{
		ptr = str_new;
		while (*s1)
			*ptr++ = *s1++;
		while (*s2)
			*ptr++ = *s2++;
		*++ptr = '\0';
	}
	return (str_new);
}
