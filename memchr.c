/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:15:32 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/15 22:12:31 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char )c;
	while (*str != '\0' && n-- > 0)
	{
		if (*str == ch)
			return (str);
		str++;
	}
	return (0);
}
