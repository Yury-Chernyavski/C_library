/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:42:41 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/16 17:28:55 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < dstsize && dst[i])
	{
		i++;
	}
	while ((i + j + 1) < dstsize && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}

/* 
int	main(void)
{
	char src[] = "Foo Bar Baz";
	char dst[1024] = "098";
	char src2[] = "Foo Bar Baz";
	char dst2[1024] = "098";

	ft_strlcat(dst, src, 2);
	strlcat(dst2, src2, 2);

	printf("dst: %s\n", dst);
	printf("dst2: %s\n", dst2);
	return (0);
}
 */