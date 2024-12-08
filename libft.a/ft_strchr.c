/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:54:50 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/08 17:58:02 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int r)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) r)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)r)
		return ((char *)&s[i]);
	return (NULL);
}
// int	main(void)
// {
// 	const char			*str = "Hello, World!";
// 	int					test_chars[] = {'l', 'o', 'x', '\0'};
// 	unsigned long		i;
// 	char				*result1;
// 	char				*result2;

// 	i = 0;
// 	while (i < sizeof(test_chars) / sizeof(test_chars[0]))
// 	{
// 		result1 = strchr(str, test_chars[i]);
// 		result2 = ft_strchr(str, test_chars[i]);
// 		printf("Searching for '%c':\n", test_chars[i]);

// 		printf("Original strchr: ");
// 		if (result1 != NULL)
// 			printf("%s\n", result1);
// 		else
// 			printf("NULL\n");

// 		printf("Custom ft_strchr: ");
// 		if (result2 != NULL)
// 			printf("%s\n\n", result2);
// 		else
// 			printf("NULL\n\n");

// 		i++;
// 	}
// 	return (0);
// }