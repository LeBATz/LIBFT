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
	if (!s && !len)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	str2 = (char *)malloc(sizeof(char) * (len + 1));
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
// int	main(void)
// {
// 	char	*str;
// 	char	*substr;

// 	str = "Hello, World!";
// 	printf("Original string: %s\n", str);

// 	substr = ft_substr(str, 7, 5);
// 	printf("Substring (start: 7, len: 5): %s\n", substr);
// 	free(substr);

// 	substr = ft_substr(str, 0, 5);
// 	printf("Substring (start: 0, len: 5): %s\n", substr);
// 	free(substr);

// 	substr = ft_substr(str, 13, 5);
// 	printf("Substring (start > strlen): %s\n", substr);
// 	free(substr);

// 	substr = ft_substr(str, 7, 100);
// 	printf("Substring (len > remaining): %s\n", substr);
// 	free(substr);

// 	substr = ft_substr(NULL, 0, 5);
// 	printf("Substring (NULL input): %s\n", substr);
// 	free(substr);

// 	return (0);
// }