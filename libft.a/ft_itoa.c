/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:51:33 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 21:10:59 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	len;
	long	nb;

	nb = n;
	len = ft_intlen(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	else if (nb == 0)
		res[0] = '0';
	while (nb > 0)
	{
		res[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (res);
}
// int	main(void)
// {
// 	int		numbers[] = {0, -42, 42, 2147483647, -2147483648, 100, -100};
// 	int		count = sizeof(numbers) / sizeof(numbers[0]);
// 	char	*result;
// 	int		i;

// 	i = 0;
// 	while (i < count)
// 	{
// 		result = ft_itoa(numbers[i]);
// 		if (result)
// 		{
// 			printf("Input: %d, Output: %s\n", numbers[i], result);
// 			free(result);
// 		}
// 		else
// 			printf("Memory allocation failed for %d\n", numbers[i]);
// 		i++;
// 	}
// 	return (0);
// }