/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:52:31 by rdavid-g          #+#    #+#             */
/*   Updated: 2024/11/30 23:17:14 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// // Example functions to use with ft_striteri
// static void to_uppercase(unsigned int i, char *c)
// {
//     (void)i;
//     if (*c >= 'a' && *c <= 'z')
//         *c = *c - 32;
// }

// static void add_index(unsigned int i, char *c)
// {
//     *c = *c + i;
// }

// static void print_char_index(unsigned int i, char *c)
// {
//     printf("Character at index %u is '%c'\n", i, *c);
// }

// int main(void)
// {
//     char str1[] = "hello, world!";
//     char str2[] = "abcdef";
//     char str3[] = "test";

//     // Test 1: Convert to uppercase
//     printf("Original string: %s\n", str1);
//     ft_striteri(str1, &to_uppercase);
//     printf("After to_uppercase: %s\n\n", str1);

//     // Test 2: Add index to each character
//     printf("Original string: %s\n", str2);
//     ft_striteri(str2, &add_index);
//     printf("After add_index: %s\n\n", str2);

//     // Test 3: Print each character with its index
//     printf("Printing each character with its index:\n");
//     ft_striteri(str3, &print_char_index);

//     // Test 4: NULL string
//     ft_striteri(NULL, &to_uppercase);
//     printf("NULL string test completed.\n\n");

//     // Test 5: NULL function
//     ft_striteri(str3, NULL);
//     printf("NULL function test completed.\n");

//     return 0;
// }