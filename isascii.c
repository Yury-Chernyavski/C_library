/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:21:29 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/14 18:07:54 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/* 
int	main(void)
{
	int	c;

	c = 1765;
	printf("%i \n", ft_isascii(c));
	printf("%i \n", isascii(c));
	return (0);
}
 */