/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:51:38 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/06 18:59:32 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char r)
{
	size_t	count;
	int		inside;

	count = 0;
	inside = 0;
	while (*s)
	{
		if (*s != r && !inside)
		{
			inside = 1;
			count++;
		}
		else if (*s == r)
			inside = 0;
		s++;
	}
	return (count);
}

static void	free_split(char **spc, size_t i)
{
	while (i > 0)
		free(spc[--i]);
	free(spc);
}

static char	**ft_split_aux(char const *s, char c, char **result)
{
	size_t	start;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start < i)
		{
			result[n] = ft_substr(s, start, i - start);
			if (!result[n++])
			{
				free_split(result, n);
				return (NULL);
			}
		}
	}
	result[n] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!result)
		return (NULL);
	return (ft_split_aux(s, c, result));
}
