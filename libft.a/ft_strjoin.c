/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:11:12 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 23:23:41 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str3;
	int		i;
	int		j;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2)+1);
	if (!str3)
		return (NULL);
	while (s1[i] != '\0')
	{
		str3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str3[i] = s2[j];
		i++;
		j++;
	}
	str3[i] = '\0';
	return (str3);
}
// int	main(void)
// {
// 	const char	*s1;
// 	const char	*s2;
// 	char		*result;

// 	// Test case 1: Normal concatenation
// 	s1 = "Hello, ";
// 	s2 = "World!";
// 	result = ft_strjoin(s1, s2);
// 	printf("Test 1: %s\n", result);
// 	free(result);

// 	// Test case 2: Empty first string
// 	s1 = "";
// 	s2 = "Non-empty";
// 	result = ft_strjoin(s1, s2);
// 	printf("Test 2: %s\n", result);
// 	free(result);

// 	// Test case 3: Empty second string
// 	s1 = "Non-empty";
// 	s2 = "";
// 	result = ft_strjoin(s1, s2);
// 	printf("Test 3: %s\n", result);
// 	free(result);

// 	// Test case 4: Both strings empty
// 	s1 = "";
// 	s2 = "";
// 	result = ft_strjoin(s1, s2);
// 	if (result)
// 	{
// 		printf("Test 4: '%s'\n", result);
// 	}
// 	else
// 	{
// 		printf("Test 4: NULL\n");
// 	}
// 	free(result);

// 	// Test case 5: NULL input (should return NULL)
// 	result = ft_strjoin(NULL, "Test");
// 	if (result)
// 	{
// 		printf("Test 5: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("Test 5: NULL\n");
// 	}
// 	free(result);

// 	return (0);
// }