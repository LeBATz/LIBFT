/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:06:06 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 21:55:44 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	const unsigned long		i;
	const unsigned char		*ptr;
	const unsigned char		*ptr2;

	ptr = dest;
	ptr2 = src;
	i = 0;
	if (ptr2 < ptr)
	{
		while (i <= len)
		{
			ptr[len - 1] = ptr2[len - i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			*ptr++ = *ptr2++;
			len--;
		}
	}
	return (dest);
}
