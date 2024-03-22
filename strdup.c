/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:25:03 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/16 17:30:16 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (0);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

/*
int	main(void)
{
	char	*str = "Foo Bar Baz";
	char	*str2 = "";
	char	*str3 = "string";
	char	*str4 = "";

	printf("%s\n", str2);
	printf("%s\n", str4);

	str2 = strdup(str);
	str4 = ft_strdup(str3);

	printf("base string: %s; copied string: %s\n", str, str2);
	printf("base string: %s; copied string: %s\n", str3,  str4);
}
 */