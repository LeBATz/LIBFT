/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:34:19 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 23:34:50 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str2;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	str2 = (char *)malloc(len + 1);
	if (!str2)
		return (NULL);
	while (i < ft_strlen(s) && j < len)
	{
		str2[j] = s[i];
		j++;
		i++;
	}
	str2[j] = '\0';
	return (str2);
}
