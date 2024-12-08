/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:03:43 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 21:16:28 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptr;
	char	*ptr2;

	if (n == 0 || dest == src)
		return (dest);
	ptr = (char *)dest;
	ptr2 = (char *)src;
	while (n > 0)
	{
		*ptr = *ptr2;
		ptr++;
		ptr2++;
		n--;
	}
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
// 	char	src1[] = "Hello, World!";
// 	char	dst1[20] = {0};
// 	char	src2[] = "Hello, World!";
// 	char	dst2[20] = {0};
// 	int		arr_src[] = {1, 2, 3, 4, 5};
// 	int		arr_dst1[5] = {0};
// 	int		arr_dst2[5] = {0};

// 	printf("Original data:\n");
// 	printf("String: %s\n", src1);
// 	printf("Array: ");
// 	print_memory(arr_src, sizeof(arr_src));

// 	printf("\nOriginal memcpy:\n");
// 	memcpy(dst1, src1, 13);
// 	printf("Copied string: %s\n", dst1);
// 	memcpy(arr_dst1, arr_src, sizeof(int) * 3);
// 	printf("Copied array: ");
// 	print_memory(arr_dst1, sizeof(arr_dst1));

// 	printf("\nCustom ft_memcpy:\n");
// 	ft_memcpy(dst2, src2, 13);
// 	printf("Copied string: %s\n", dst2);
// 	ft_memcpy(arr_dst2, arr_src, sizeof(int) * 3);
// 	printf("Copied array: ");
// 	print_memory(arr_dst2, sizeof(arr_dst2));

// 	return (0);
// }