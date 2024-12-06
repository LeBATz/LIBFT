/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:46:01 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 23:31:01 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lens1;

	if (!s1 || set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	lens1 = ft_strlen(s1);
	while (lens1 && ft_strchr(set, s1[lens1]))
		lens1--;
	return (ft_substr(s1, 0, lens1 + 1));
}
