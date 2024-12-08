/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:53:43 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 21:58:55 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
// int main(void)
// {
//     // Test 1: Write to stdout (file descriptor 1)
//     write(1, "Test 1 - Writing to stdout:\n", 28);
//     ft_putendl_fd("Hello, World!", 1);

//     // Test 2: Write to stderr (file descriptor 2)
//     write(2, "Test 2 - Writing to stderr:\n", 28);
//     ft_putendl_fd("This is an error message.", 2);

//     // Test 3: Write an empty string
//     write(1, "Test 3 - Writing an empty string:\n", 34);
//     ft_putendl_fd("", 1);

//     // Test 4: Write a string with special characters
//     write(1, "Test 4 - String with special characters:\n", 41);
//     ft_putendl_fd("Tab\tNewline\n", 1);

//     // Test 5: Write multiple lines
//     write(1, "Test 5 - Writing multiple lines:\n", 33);
//     ft_putendl_fd("Line 1", 1);
//     ft_putendl_fd("Line 2", 1);
//     ft_putendl_fd("Line 3", 1);

//     // Test 6: Write a NULL string (should not write anything)
//     write(1, "Test 6 - Writing NULL string:\n", 30);
//     ft_putendl_fd(NULL, 1);
//     write(1, "(end of NULL string test)\n", 26);

//     return (0);
// }