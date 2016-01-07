/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:26:57 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/07 16:36:02 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		end;
	size_t		i;

	start = (size_t)-1;
	end = 0;
	i = 0;
	while (s[i])
	{
		if (!ft_isspace(s[i]))
		{
			if (start == (size_t)-1)
				start = i;
			end = i;
		}
		i++;
	}
	if (start == (size_t)-1)
		return (ft_strdup(""));
	return (ft_strsub(s, start, ((end + 1) - start)));
}
