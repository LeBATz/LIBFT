/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:56:04 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/12 17:33:39 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int r)
{
	if (r >= 32 && r <= 126)
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	int	test_chars[] = {31, 32, 65, 126, 127, 0};
// 	int	i;

// 	i = 0;
// 	while (test_chars[i] != 0)
// 	{
// 		printf("Testing character ASCII %d:\n", test_chars[i]);
// 		printf("isprint: %d\n", isprint(test_chars[i]));
// 		printf("ft_isprint: %d\n\n", ft_isprint(test_chars[i]));
// 		i++;
// 	}
// 	return (0);
// }