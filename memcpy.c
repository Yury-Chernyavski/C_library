/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:48:16 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/15 21:43:39 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*str;
	unsigned char		*s;

	str = (unsigned char *)src;
	s = (unsigned char *)dest;
	while (n-- > 0)
	{
		*(s++) = *(str++);
	}
	return (dest);
}
/* 
int	main(void)
{
	char	str[] = "That string";
	char	dest[20];
	char	str2[] = "That string";
	char	dest2[20];

	ft_memcpy(dest, str, 5);
	memcpy(dest2, str2, 5);

	printf("%s \n", dest);
	printf("%s \n", dest2);
}
 */
