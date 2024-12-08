/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:55:51 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/12 18:03:39 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int r, size_t n)
{
	char	*ptr;

	ptr = ((char *) s);
	while (n > 0)
	{
		*ptr = (unsigned char) r;
		ptr++;
		n--;
	}
	return (s);
}
// static void	print_memory(void *ptr, int size)
// {
// 	unsigned char	*p;
// 	int				i;

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
// 	char	str1[20] = "Hello, World!";
// 	char	str2[20] = "Hello, World!";
// 	int		arr1[5] = {1, 2, 3, 4, 5};
// 	int		arr2[5] = {1, 2, 3, 4, 5};

// 	printf("Original memset:\n");
// 	memset(str1, '*', 5);
// 	printf("String: %s\n", str1);
// 	memset(arr1, 0, sizeof(int) * 3);
// 	printf("Array: ");
// 	print_memory(arr1, sizeof(arr1));

// 	printf("\nCustom ft_memset:\n");
// 	ft_memset(str2, '*', 5);
// 	printf("String: %s\n", str2);
// 	ft_memset(arr2, 0, sizeof(int) * 3);
// 	printf("Array: ");
// 	print_memory(arr2, sizeof(arr2));

// 	return (0);
// }