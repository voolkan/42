/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:24:09 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/04 16:07:18 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	int		i;

	new_str = ft_strnew(sizeof(char) * (ft_strlen(s)));
	if (new_str)
	{
		i = 0;
		while (s[i] != '\0')
		{
			new_str[i] = f(s[i]);
			i++;
		}
		new_str[i] = '\0';
	}
	return (new_str);
}
