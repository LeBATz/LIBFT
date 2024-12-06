/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:54:50 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/12/06 22:22:50 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int r)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) r)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)r)
		return ((char *)&s[i]);
	return (NULL);
}
