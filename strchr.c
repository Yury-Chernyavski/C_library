/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:26:58 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/21 20:28:23 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
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

	a = ft_strchr(str, 'f');
	b = strchr(str, 'f');
	printf("%ld\n", a - str);
	printf("%ld\n", b - str);
}
 */