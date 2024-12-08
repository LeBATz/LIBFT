/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:33:52 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/08 18:12:46 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
// int	main(void)
// {
// 	char *test1 = "Hello, World!";
// 	char *test2 = "42 School";
// 	char *test3 = "";
// 	int len1;
// 	int len2;

// 	len1 = strlen(test1);
// 	len2 = ft_strlen(test1);
// 	printf("Original string: \"%s\"\n", test1);
// 	printf("Using strlen: %d\n", len1);
// 	printf("Using ft_strlen: %d\n\n", len2);

// 	len1 = strlen(test2);
// 	len2 = ft_strlen(test2);
// 	printf("Original string: \"%s\"\n", test2);
// 	printf("Using strlen: %d\n", len1);
// 	printf("Using ft_strlen: %d\n\n", len2);

// 	len1 = strlen(test3);
// 	len2 = ft_strlen(test3);
// 	printf("Original string: \"%s\"\n", test3);
// 	printf("Using strlen: %d\n", len1);
// 	printf("Using ft_strlen: %d\n", len2);

// 	return (0);
// }