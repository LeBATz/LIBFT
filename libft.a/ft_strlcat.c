/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 02:18:57 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 23:27:40 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	while (dest[i] != '\0')
		i++;
	res = 0;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
// int	main(void)
// {
// 	char			dst1[20] = "Hello, ";
// 	char			dst2[20] = "Hello, ";
// 	char			src[] = "World!";
// 	unsigned int	result1;
// 	unsigned int	result2;

// 	printf("Original strings:\n");
// 	printf("dst: %s\n", dst1);
// 	printf("src: %s\n", src);

// 	result1 = strlcat(dst1, src, sizeof(dst1));
// 	printf("\nStandard strlcat:\n");
// 	printf("Result: %s\n", dst1);
// 	printf("Return value: %u\n", result1);

// 	result2 = ft_strlcat(dst2, src, sizeof(dst2));
// 	printf("\nCustom ft_strlcat:\n");
// 	printf("Result: %s\n", dst2);
// 	printf("Return value: %u\n", result2);

// 	return (0);
// }