/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:04:29 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/19 18:04:29 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int r)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) r)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
// int	main(void)
// {
// 	const char	*str = "Hello, World! Hello, 42!";
// 	int			test_chars[] = {'l', 'o', '4', '!', 'x', '\0'};
// 	unsigned int			i;
// 	char		*result1;
// 	char		*result2;

// 	i = 0;
// 	while (i < sizeof(test_chars) / sizeof(test_chars[0]))
// 	{
// 		result1 = strrchr(str, test_chars[i]);
// 		result2 = ft_strrchr(str, test_chars[i]);
// 		printf("Searching for '%c':\n", test_chars[i]);
// 		printf("Original strrchr: ");
// 		if (result1 != NULL)
// 			printf("%s\n", result1);
// 		else
// 			printf("NULL\n");
// 		printf("Custom ft_strrchr: ");
// 		if (result2 != NULL)
// 			printf("%s\n", result2);
// 		else
// 			printf("NULL\n");
// 		printf("\n");
// 		i++;
// 	}
// 	return (0);
// }