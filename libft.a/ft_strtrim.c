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
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	if (i >= j)
		return (ft_strdup(""));
	return (ft_substr(s1, i, j - i));
}

// int	main(void)
// {
// 	char *s1 = "abobora123nada";
// 	char *set = "bo";
// 	printf("%s\n", ft_strtrim(s1, set));
// 	return (0);
// }