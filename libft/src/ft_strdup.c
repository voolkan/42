/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:22:17 by scluzeau          #+#    #+#             */
/*   Updated: 2015/12/04 15:22:19 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(char const *s1)
{
	char	*str_new;
	char	*ptr;

	str_new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str_new)
	{
		ptr = str_new;
		while (*s1)
			*ptr++ = *s1++;
		*ptr = *s1;
	}
	return (str_new);
}
