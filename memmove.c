/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:11:09 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/16 15:40:41 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str2;

	if (!dest && !src)
		return (NULL);
	i = 0;
	str = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	if (str > str2)
		while (n-- > 0)
			str[n] = str2[n];
	else
	{
		while (i < n)
		{
			str[i] = str2[i];
			i++;
		}
	}
	return (dest);
}

/* 
int	main(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	dest = src + 1;
	// if (dest != ft_memmove(dest, "consectetur", 5))
	// 	write(1, "dest's adress was not returned\n", 31);
	// write(1, dest, 22);

	if (src != ft_memmove(src, dest, 8))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);

	// // my part
	// unsigned char str[] = "1234567890";
	// unsigned char str2[] = "1234567890";

	// printf("old str: %s\n", str);
	// printf("old str2: %s\n", str2);

	// ft_memmove(&str[4], &str[3], 3);
	// memmove(&str2[4], &str2[3], 3);

	// printf("new str: %s\n", str);
	// printf("new str2: %s\n", str2);
	// return (0);
}
 */