/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:20:43 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/08 18:17:40 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
// int	main(void)
// {
// 	char			*str1 = "Hello";
// 	char			*str2 = "Hello, World!";
// 	char			*str3 = "Hella";
// 	int				n_values[] = {3, 5, 7, 10};
// 	unsigned int	i;
// 	int				result1;
// 	int				result2;

// 	i = 0;
// 	while (i < sizeof(n_values) / sizeof(n_values[0]))
// 	{
// 		printf("Comparing with n = %d:\n", n_values[i]);

// 		result1 = strncmp(str1, str2, n_values[i]);
// 		result2 = ft_strncmp(str1, str2, n_values[i]);
// 		printf("\"Hello\" vs \"Hello, World!\"\n");
// 		printf("Original strncmp: %d\n", result1);
// 		printf("Custom ft_strncmp: %d\n\n", result2);

// 		result1 = strncmp(str1, str3, n_values[i]);
// 		result2 = ft_strncmp(str1, str3, n_values[i]);
// 		printf("\"Hello\" vs \"Hella\"\n");
// 		printf("Original strncmp: %d\n", result1);
// 		printf("Custom ft_strncmp: %d\n\n", result2);

// 		i++;
// 	}
// 	return (0);
// }