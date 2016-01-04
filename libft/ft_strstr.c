/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 15:41:06 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/04 16:00:13 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(char const *s1, char const *s2)
{
	char const	*ptr_s1;
	char const	*ptr_s2;

	if (!*s2)
		return ((char *)s1);
	while (*s1)
	{
		ptr_s1 = s1;
		ptr_s2 = s2;
		while (*ptr_s2 == *ptr_s1 && *ptr_s2 != '\0')
		{
			ptr_s1++;
			ptr_s2++;
		}
		if (*ptr_s2 == '\0')
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
