/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:53:18 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/27 18:39:55 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (len != '\0')
		len++;
	i = 0;
	while (dest[i] != '\0')
	{
		while (src[i] <= size)
			i++;
	}
	dest[i] = '\0';
	return (len);
}
