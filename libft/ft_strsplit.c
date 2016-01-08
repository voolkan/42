/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 18:07:16 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/08 18:04:24 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		count_words(char const *s, char c)
{
	int		i;
	int		j;

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
	return (j);
}

/*
** renvoie i + j
** - j est la taille du nouveau mot
** - i est le nombre de caracteres deja lus
*/

static int		get_next_word(char const *s, char c, int i, char **res_k)
{
	int		j;

	j = 0;
	while (s[i + j] != c && s[i + j])
		j++;
	if (!(*res_k = (char *)malloc(sizeof(char) * (j + 1))))
		return (0);
	*res_k = ft_strncpy(*res_k, &s[i], j);
	(*res_k)[j] = '\0';
	return (i + j);
}

static void		clear_all_words(char **res, int k)
{
	int		i;

	i = 0;
	while (i < k)
		ft_memdel((void **)&res[i]);
	ft_memdel((void**)res);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		k;

	if (!(res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			if (!(i = get_next_word(s, c, i, &res[k++])))
			{
				clear_all_words(res, k - 1);
				return (NULL);
			}
		}
		else
			break ;
	}
	res[k] = NULL;
	return (res);
}
