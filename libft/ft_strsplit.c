/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 18:07:16 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/07 18:14:33 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		j++;
		while (s[i] != c && s[i])
			i++;
	}
	res = (char **)malloc(sizeof(char *) * (j + 1));
	if (!res)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i + j] != c && s[i + j])
			j++;
	res[k] = (char *)malloc(sizeof(char) * (j + 1));
	if (!res[k])
	{
		free (res);
		return (NULL);
	}
	res[k] = ft_strncpy(res[k], &s[i], j);
	res[k][j] = '\0';
	i = i + j;
	k++;
	}
	res[k] = NULL;
	return (res);
}
