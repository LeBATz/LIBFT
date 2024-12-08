/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:52:19 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 23:29:56 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// // Example functions to use with ft_strmapi
// static char	to_uppercase(unsigned int i, char c)
// {
// 	(void)i;  // Unused parameter
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// static char	add_index(unsigned int i, char c)
// {
// 	return (c + i);
// }

// int	main(void)
// {
// 	char	*str;
// 	char	*result;

// 	// Test 1: Convert to uppercase
// 	str = "hello, world!";
// 	result = ft_strmapi(str, &to_uppercase);
// 	if (result)
// 	{
// 		printf("Original: %s\n", str);
// 		printf("Uppercase: %s\n", result);
// 		free(result);
// 	}
// 	else
// 		printf("Memory allocation failed\n");

// 	// Test 2: Add index to each character
// 	str = "abcdef";
// 	result = ft_strmapi(str, &add_index);
// 	if (result)
// 	{
// 		printf("Original: %s\n", str);
// 		printf("Added index: %s\n", result);
// 		free(result);
// 	}
// 	else
// 		printf("Memory allocation failed\n");

// 	// Test 3: NULL string
// 	result = ft_strmapi(NULL, &to_uppercase);
// 	if (!result)
// 		printf("NULL string handled correctly\n");

// 	// Test 4: NULL function
// 	str = "test";
// 	result = ft_strmapi(str, NULL);
// 	if (!result)
// 		printf("NULL function handled correctly\n");

// 	return (0);
// }