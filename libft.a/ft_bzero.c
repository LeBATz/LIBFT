/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:38:28 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/08 17:30:18 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*(ptr++) = 0;
		n--;
	}
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
// 	char	str1[20] = "Hello, World!";
// 	char	str2[20] = "Hello, World!";
// 	int		arr1[5] = {1, 2, 3, 4, 5};
// 	int		arr2[5] = {1, 2, 3, 4, 5};

// 	printf("Original bzero:\n");
// 	bzero(str1, 5);
// 	printf("String: %s\n", str1);
// 	bzero(arr1, sizeof(int) * 3);
// 	printf("Array: ");
// 	print_memory(arr1, sizeof(arr1));

// 	printf("\nCustom ft_bzero:\n");
// 	ft_bzero(str2, 5);
// 	printf("String: %s\n", str2);
// 	ft_bzero(arr2, sizeof(int) * 3);
// 	printf("Array: ");
// 	print_memory(arr2, sizeof(arr2));

// 	return (0);
// }