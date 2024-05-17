/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:26:58 by ycharnia          #+#    #+#             */
/*   Updated: 2024/05/10 17:14:53 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

/* 
int	main(void)
{
	char	str[] = "string";
	char	*a;
	char	*b;

	a = ft_strchr(str, 'f');
	b = strchr(str, 'f');
	printf("%ld\n", a - str);
	printf("%ld\n", b - str);
}
 */