/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 04:26:11 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 23:12:38 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// int	main(void)
// {
// 	char *test1 = "Hello, World!";
// 	char *test2 = "42 School";
// 	char *dup1;
// 	char *dup2;

// 	dup1 = strdup(test1);
// 	dup2 = ft_strdup(test1);

// 	printf("Original: %s\n", test1);
// 	printf("Using strdup: %s\n", dup1);
// 	printf("Using ft_strdup: %s\n", dup2);

// 	free(dup1);
// 	free(dup2);

// 	dup1 = strdup(test2);
// 	dup2 = ft_strdup(test2);

// 	printf("\nOriginal: %s\n", test2);
// 	printf("Using strdup: %s\n", dup1);
// 	printf("Using ft_strdup: %s\n", dup2);

// 	free(dup1);
// 	free(dup2);

// 	return (0);
// }