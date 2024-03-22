/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:27:18 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/15 21:16:31 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	const char		*init;

	init = s;
	i = ft_strlen(s);
	s = s + i;
	while (*s != *init && *s != c)
		s--;
	if (*s == c)
		return ((char *)s);
	return (0);
}

/* 
int	main(void)
{
	char	str[] = "string";
	char	*a;
	char	*b;

	a = ft_strrchr(str, 's');
	b = strchr(str, 's');
	printf("%ld\n", a - str);
	printf("%ld\n", b - str);
}
 */