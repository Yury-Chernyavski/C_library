/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:27:18 by ycharnia          #+#    #+#             */
/*   Updated: 2024/05/10 17:16:27 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
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