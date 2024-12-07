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
