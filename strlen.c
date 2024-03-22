/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:55:28 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/14 18:07:15 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* 
int	main(void)
{
	char	str[] = "Some string and bla bl";

	printf("Length of string: %ld \n", ft_strlen(str));
	printf("Length of string: %ld \n", strlen(str));
}
 */