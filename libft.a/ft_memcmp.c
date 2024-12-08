/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:54:20 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/08 17:43:41 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	const char	*str1 = "Hello, World!";
// 	const char	*str2 = "Hello, There!";
// 	const char	*str3 = "Hello, World!";
// 	int			len1 = 13;
// 	int			len2 = 5;
// 	int			result1;
// 	int			result2;

// 	printf("Comparing \"%s\" and \"%s\":\n", str1, str2);
// 	result1 = memcmp(str1, str2, len1);
// 	result2 = ft_memcmp(str1, str2, len1);
// 	printf("Standard memcmp: %d\n", result1);
// 	printf("Custom ft_memcmp: %d\n\n", result2);

// 	printf("Comparing \"%s\" and \"%s\" (first %d bytes):\n", str1, str2, len2);
// 	result1 = memcmp(str1, str2, len2);
// 	result2 = ft_memcmp(str1, str2, len2);
// 	printf("Standard memcmp: %d\n", result1);
// 	printf("Custom ft_memcmp: %d\n\n", result2);

// 	printf("Comparing \"%s\" and \"%s\":\n", str1, str3);
// 	result1 = memcmp(str1, str3, len1);
// 	result2 = ft_memcmp(str1, str3, len1);
// 	printf("Standard memcmp: %d\n", result1);
// 	printf("Custom ft_memcmp: %d\n", result2);

// 	return (0);
// }