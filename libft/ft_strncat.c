/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:24:55 by scluzeau          #+#    #+#             */
/*   Updated: 2015/12/04 15:24:57 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = s1;
	while (*ptr++)
		;
	ptr--;
	i = 0;
	while (i < n)
	{
		ptr[i] = s2[i];
		i++;
	}
	ptr[i] = '\0';
	return (s1);
}
