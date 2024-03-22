/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:28:13 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/20 15:52:20 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!little[i])
	{
		return ((char *)big);
	}
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && j + i < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}

/* 
int	main(void)
{
	const char	*str1 = "Foo Bar Baz";
	const char	*str2 = "Bar";

	printf("%s\n", ft_strnstr(str1, str2, 4));
	printf("%s\n", strnstr(str1, str2, 4));
}
 */