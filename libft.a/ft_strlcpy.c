/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:53:18 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/08 18:11:49 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		i = len;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (len);
}
// int	main(void)
// {
// 	char			src[] = "Hello, World!";
// 	char			dst1[15];
// 	char			dst2[15];
// 	unsigned int	result1;
// 	unsigned int	result2;

// 	printf("Original string: %s\n", src);

// 	result1 = strlcpy(dst1, src, sizeof(dst1));
// 	printf("\nStandard strlcpy:\n");
// 	printf("Copied string: %s\n", dst1);
// 	printf("Return value: %u\n", result1);

// 	result2 = ft_strlcpy(dst2, src, sizeof(dst2));
// 	printf("\nCustom ft_strlcpy:\n");
// 	printf("Copied string: %s\n", dst2);
// 	printf("Return value: %u\n", result2);

// 	return (0);
// }