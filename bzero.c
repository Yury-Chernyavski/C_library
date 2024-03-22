/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:28:11 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/15 18:08:45 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)s;
	while (n-- > 0)
	{
		*i++ = '\0';
	}
}

/* 
int	main(void)
{
	char	str[] = "string";
	char	str2[] = "string";

	printf("%s \n", str);
	printf("%s \n", str2);

	ft_bzero(str, 3);
	bzero(str2, 3);

	printf("%s \n", str);
	printf("%s \n", str2);
}
 */