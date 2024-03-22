/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:49:30 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/14 23:33:30 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)s;
	while (n-- > 0)
	{
		*i++ = (unsigned char)c;
	}
	return (s);
}

/* 
int	main(void)
{
	char	str[] = "string";
	char	str2[] = "string";

	ft_memset(str, 'd', 5);
	memset(str2, 'd', 5);

	printf("%s \n", str);
	printf("%s \n", str2);
}
 */