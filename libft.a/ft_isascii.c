/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:43:37 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/08 17:37:21 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int r)
{
	if (r >= 0 && r <= 127)
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	int	test_chars[] = {0, 32, 65, 126, 127, 128, 255, -1};
// 	int	array_size;
// 	int	i;
// 	int	original_result;
// 	int	custom_result;

// 	array_size = sizeof(test_chars) / sizeof(test_chars[0]);
// 	i = 0;
// 	while (i < array_size)
// 	{
// 		original_result = isascii(test_chars[i]);
// 		custom_result = ft_isascii(test_chars[i]);
// 		printf("Value: %3d | Original: %d | Custom: %d\n",
// 			test_chars[i], original_result, custom_result);
// 		i++;
// 	}
// 	return (0);
// }