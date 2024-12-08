/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:51:38 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/06 18:59:32 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char r)
{
	size_t	count;
	int		inside;

	count = 0;
	inside = 0;
	while (*s)
	{
		if (*s != r && !inside)
		{
			inside = 1;
			count++;
		}
		else if (*s == r)
			inside = 0;
		s++;
	}
	return (count);
}

static void	free_split(char **spc, size_t i)
{
	while (i > 0)
		free(spc[--i]);
	free(spc);
}

static char	**ft_split_aux(char const *s, char c, char **result)
{
	size_t	start;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start < i)
		{
			result[n] = ft_substr(s, start, i - start);
			if (!result[n++])
			{
				free_split(result, n);
				return (NULL);
			}
		}
	}
	result[n] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!result)
		return (NULL);
	return (ft_split_aux(s, c, result));
}
// int	main(void)
// {
// 	char	**result;
// 	int		i;

// 	// Test 1: Normal case
// 	printf("Test 1:\n");
// 	result = ft_split("Hello world! This is a test.", ' ');
// 	if (result)
// 	{
// 		for (i = 0; result[i] != NULL; i++)
// 		{
// 			printf("%s\n", result[i]);
// 			free(result[i]);
// 		}
// 		free(result);
// 	}

// 	// Test 2: String with consecutive delimiters
// 	printf("\nTest 2:\n");
// 	result = ft_split(",,split,,this,string,", ',');
// 	if (result)
// 	{
// 		for (i = 0; result[i] != NULL; i++)
// 		{
// 			printf("%s\n", result[i]);
// 			free(result[i]);
// 		}
// 		free(result);
// 	}

// 	// Test 3: Empty string
// 	printf("\nTest 3:\n");
// 	result = ft_split("", ',');
// 	if (result)
// 	{
// 		for (i = 0; result[i] != NULL; i++)
// 		{
// 			printf("%s\n", result[i]);
// 			free(result[i]);
// 		}
// 		free(result);
// 	}

// 	// Test 4: String with no delimiters
// 	printf("\nTest 4:\n");
// 	result = ft_split("NoDelimitersHere", ',');
// 	if (result)
// 	{
// 		for (i = 0; result[i] != NULL; i++)
// 		{
// 			printf("%s\n", result[i]);
// 			free(result[i]);
// 		}
// 		free(result);
// 	}

// 	// Test 5: NULL input
// 	printf("\nTest 5:\n");
// 	result = ft_split(NULL, ',');
// 	if (result == NULL)
// 		printf("NULL input handled correctly\n");

// 	return (0);
// }