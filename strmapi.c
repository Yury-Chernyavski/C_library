/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:54:03 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/20 18:35:57 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		str_len;
	char	*result_str;

	i = 0;
	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	result_str = (char *)malloc(str_len + 1);
	if (result_str == NULL)
		return (NULL);
	while (i < str_len)
	{
		result_str[i] = (*f)(i, s[i]);
		i++;
	}
	result_str[i] = '\0';
	return (result_str);
}

/* 
char	some_fn(unsigned int i, char c)
{
	char	new_char;

	if (c > 97 && c < 122)
		new_char = c - 32;
	else
	{
		new_char = c;
	}
	return (new_char);
}

int	main(void)
{
	char	str[] = "String";
	char	*result;

	result = ft_strmapi(str, some_fn);

	if (result != NULL)
	{
		printf("%s\n", result);
		free(NULL);
	}
	return (0);
}
 */