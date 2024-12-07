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
	long		i;
	char		*ptr;
	char		*ptr2;

	if (len == 0 || dest == src)
		return (dest);
	ptr = (char *)dest;
	ptr2 = (char *)src;
	i = 0;
	if (ptr2 < ptr)
	{
		while (len--)
			ptr[len] = ptr2[len];
	}
	else
		ft_memcpy(ptr, ptr2, len);
	return (dest);
}
