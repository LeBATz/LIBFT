/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:17:24 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/08 17:40:04 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int r, size_t n)
{
	size_t				i;
	unsigned char		*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)r)
			return ((unsigned char *)&s[i]);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	const char	*str = "Hello, World!";
// 	int			search_chars[] = {'o', 'W', '!', 'x', '\0'};
// 	int			len;
// 	int			i;
// 	void		*result1;
// 	void		*result2;

// 	len = strlen(str);
// 	i = 0;
// 	while (i < (int)(sizeof(search_chars) / sizeof(search_chars[0])))
// 	{
// 		printf("Searching for '%c' in \"%s\":\n", search_chars[i], str);
// 		result1 = memchr(str, search_chars[i], len);
// 		result2 = ft_memchr(str, search_chars[i], len);
// 		printf("Original memchr: ");
// 		if (result1 != NULL)
// 			printf("Found at position %d\n", (int)((char *)result1 - str));
// 		else
// 			printf("Not found\n");
// 		printf("Custom ft_memchr: ");
// 		if (result2 != NULL)
// 			printf("Found at position %d\n", (int)((char *)result2 - str));
// 		else
// 			printf("Not found\n");
// 		printf("\n");
// 		i++;
// 	}
// 	return (0);
// }