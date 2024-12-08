/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:33:57 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/08 17:34:41 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int r)
{
	if ((r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z')
		|| (r >= '0' && r <= '9'))
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	char	test_chars[] = {'A', 'z', '0', '9', '@', ' ', '\n', '5'};
// 	int		array_size;
// 	int		i;
// 	int		original_result;
// 	int		custom_result;

// 	array_size = sizeof(test_chars) / sizeof(test_chars[0]);
// 	i = 0;
// 	while (i < array_size)
// 	{
// 		original_result = isalnum((unsigned char)test_chars[i]);
// 		custom_result = ft_isalnum(test_chars[i]);
// 		printf("Char: '%c' | Original: %d | Custom: %d\n",
// 			test_chars[i], original_result, custom_result);
// 		i++;
// 	}
// 	return (0);
// }