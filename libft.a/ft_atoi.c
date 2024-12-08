/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:49:12 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/08 17:27:58 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * sign);
}

// int	main(void)
// {
// 	char	*test1 = "  -123abc";
// 	char	*test2 = "   +456";
// 	char	*test3 = "  ---+--+1234ab567";
// 	char	*test4 = "  \t\n  789";
// 	char	*test5 = "0";
// 	printf("Test 1: ft_atoi: %d, atoi: %d\n", ft_atoi(test1), atoi(test1));
// 	printf("Test 2: ft_atoi: %d, atoi: %d\n", ft_atoi(test2), atoi(test2));
// 	printf("Test 3: ft_atoi: %d, atoi: %d\n", ft_atoi(test3), atoi(test3));
// 	printf("Test 4: ft_atoi: %d, atoi: %d\n", ft_atoi(test4), atoi(test4));
// 	printf("Test 5: ft_atoi: %d, atoi: %d\n", ft_atoi(test5), atoi(test5));
// 	return (0);
// }