/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 04:15:08 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/28 17:58:25 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size == 0 || count == 0)
		return (malloc(0));
	if (size != 0 && count > (size_t)-1 / size)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
// int	main(void)
// {
// 	int		*numbers1;
// 	int		*numbers2;
// 	int		nmemb = 5;
// 	int		size = sizeof(int);
// 	int		i;

// 	numbers1 = (int *)calloc(nmemb, size);
// 	numbers2 = (int *)ft_calloc(nmemb, size);

// 	printf("Using calloc:\n");
// 	i = 0;
// 	while (i < nmemb)
// 	{
// 		printf("numbers1[%d]: %d\n", i, numbers1[i]);
// 		i++;
// 	}

// 	printf("\nUsing ft_calloc:\n");
// 	i = 0;
// 	while (i < nmemb)
// 	{
// 		printf("numbers2[%d]: %d\n", i, numbers2[i]);
// 		i++;
// 	}

// 	free(numbers1);
// 	free(numbers2);

// 	return (0);
// }