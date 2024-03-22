/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:52:35 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/16 17:28:51 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < (dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

/* 
int	main(void)
{
	char str[] = "1234567890";
	char str2[1024] = "";
	char str3[] = "1234567890";
	char str4[1024] = "";

	ft_strlcpy(str2, str, 3);
	strlcpy(str4, str3, 3);

	printf("str2: %s\n", str2);
	printf("str4: %s\n", str4);
	return (0);
}
 */