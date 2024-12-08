/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:58:14 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/08 18:50:24 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && little[j])
		{
			if (little[j] != big[i + j])
				break ;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
//  int	main(void)
//  {
//  	const char	*largestring = "Foo Bar Baz";
//  	const char	*smallstring = "Bar";
//  	char		*ptr1;
//  	char		*ptr2;
//  	printf("Searching in larger string: \"%s\"\n", largestring);
//  	printf("Searching for smaller string: \"%s\"\n\n", smallstring);
//  	ptr1 = strnstr(largestring, smallstring, 7);
//  	ptr2 = ft_strnstr(largestring, smallstring, 7);
//  	printf("Standard strnstr result: %s\n", ptr1);
//  	printf("Custom ft_strnstr result: %s\n\n", ptr2);
//  	ptr1 = strnstr(largestring, "Baz", 10);
//  	ptr2 = ft_strnstr(largestring, "Baz", 10);
//  	printf("Searching for \"Baz\" in larger string:\n");
//  	printf("Standard strnstr result: %s\n", ptr1);
//  	printf("Custom ft_strnstr result: %s\n\n", ptr2);
//  	ptr1 = strnstr(largestring, "z", 11);
//  	ptr2 = ft_strnstr(largestring, "z", 11);
//  	printf("Searching for \"z\" in larger string:\n");
//  	printf("Standard strnstr result: %s\n", ptr1);
//  	printf("Custom ft_strnstr result: %s\n\n", ptr2);
//  	ptr1 = strnstr(largestring, "", 5);
//  	ptr2 = ft_strnstr(largestring, "", 5);
//  	printf("Searching for an empty string in larger string:\n");
//  	printf("Standard strnstr result: %s\n", ptr1);
//  	printf("Custom ft_strnstr result: %s\n", ptr2);
//  	return (0);
//  }
// -lbsd