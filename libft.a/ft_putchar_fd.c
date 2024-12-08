/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:52:55 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 21:57:43 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main(void)
// {
//     // Test 1: Write to stdout (file descriptor 1)
//     write(1, "Writing 'A' to stdout: ", 23);
//     ft_putchar_fd('A', 1);
//     ft_putchar_fd('\n', 1);

//     // Test 2: Write to stderr (file descriptor 2)
//     write(2, "Writing 'B' to stderr: ", 23);
//     ft_putchar_fd('B', 2);
//     ft_putchar_fd('\n', 2);

//     // Test 3: Write multiple characters to stdout
//     write(1, "Writing 'Hello' to stdout: ", 27);
//     ft_putchar_fd('H', 1);
//     ft_putchar_fd('e', 1);
//     ft_putchar_fd('l', 1);
//     ft_putchar_fd('l', 1);
//     ft_putchar_fd('o', 1);
//     ft_putchar_fd('\n', 1);

//     // Test 4: Write a newline character
//     write(1, "Writing a newline character: ", 29);
//     ft_putchar_fd('\n', 1);

//     return 0;
// }