/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:49:49 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/20 18:19:37 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* 
void	*some_fn(unsigned int i, char *s)
{
	printf("%d: %c\n", i, *s);

	return (0);
}

int	main(void)
{
	char	str[] = "String";

	ft_striteri(str, (void *)some_fn);
	return (0);
}
 */