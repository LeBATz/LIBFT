/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:53:51 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 22:00:45 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	digit;

	nb = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	digit = (nb % 10) + '0';
	write(fd, &digit, 1);
}
// int main(void)
// {
//     // Test 1: Write positive number to stdout
//     write(1, "Test 1 - Positive number: ", 26);
//     ft_putnbr_fd(42, 1);
//     write(1, "\n", 1);

//     // Test 2: Write negative number to stdout
//     write(1, "Test 2 - Negative number: ", 26);
//     ft_putnbr_fd(-42, 1);
//     write(1, "\n", 1);

//     // Test 3: Write zero to stdout
//     write(1, "Test 3 - Zero: ", 15);
//     ft_putnbr_fd(0, 1);
//     write(1, "\n", 1);

//     // Test 4: Write largest possible int (INT_MAX)
//     write(1, "Test 4 - INT_MAX: ", 18);
//     ft_putnbr_fd(2147483647, 1);
//     write(1, "\n", 1);

//     // Test 5: Write INT_MIN to stdout
//     write(1, "Test 5 - INT_MIN: ", 18);
//     ft_putnbr_fd(-2147483648, 1);
//     write(1, "\n", 1);

//     // Test 6: Write to stderr
//     write(2, "Test 6 - Writing to stderr: ", 28);
//     ft_putnbr_fd(123, 2);
//     write(2, "\n", 1);

//     return (0);
// }