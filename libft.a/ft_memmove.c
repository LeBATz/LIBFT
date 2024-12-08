/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:06:06 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 21:55:44 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	long		i;
	char		*ptr;
	char		*ptr2;

	if (len == 0 || dest == src)
		return (dest);
	ptr = (char *)dest;
	ptr2 = (char *)src;
	i = 0;
	if (ptr2 < ptr)
	{
		while (len--)
			ptr[len] = ptr2[len];
	}
	else
		ft_memcpy(ptr, ptr2, len);
	return (dest);
}
// static void	print_memory(void *ptr, size_t size)
// {
// 	unsigned char	*p;
// 	size_t			i;

// 	p = (unsigned char *)ptr;
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%02x ", p[i]);
// 		i++;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	char	str[] = "abcdefghijklmnopqrstuvwxyz";
// 	char	str2[] = "abcdefghijklmnopqrstuvwxyz";

// 	printf("Original string: %s\n", str);
// 	printf("Original memory: ");
// 	print_memory(str, strlen(str));

// 	printf("\nStandard memmove:\n");
// 	memmove(str + 4, str, 10);
// 	printf("Result string: %s\n", str);
// 	printf("Result memory: ");
// 	print_memory(str, strlen(str));

// 	printf("\nCustom ft_memmove:\n");
// 	ft_memmove(str2 + 4, str2, 10);
// 	printf("Result string: %s\n", str2);
// 	printf("Result memory: ");
// 	print_memory(str2, strlen(str2));

// 	return (0);
// }