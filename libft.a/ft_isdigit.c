/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:29:21 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/08 17:37:21 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int r)
{
	if (r >= '0' && r <= '9')
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	char	test_chars[] = {'0', '5', '9', 'A', 'z', '@', ' ', '\n'};
// 	int		array_size;
// 	int		i;
// 	int		original_result;
// 	int		custom_result;

// 	array_size = sizeof(test_chars) / sizeof(test_chars[0]);
// 	i = 0;
// 	while (i < array_size)
// 	{
// 		original_result = isdigit((unsigned char)test_chars[i]);
// 		custom_result = ft_isdigit(test_chars[i]);
// 		printf("Char: '%c' | Original: %d | Custom: %d\n",
// 			test_chars[i], original_result, custom_result);
// 		i++;
// 	}
// 	return (0);
// }