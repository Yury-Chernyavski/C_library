/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:20:49 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/18 23:21:29 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	j = 0;
	i = start;
	substr = malloc(sizeof(char) * len + 1);
	if (substr == NULL)
		return (NULL);
	if (s == 0)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (j < len)
	{
		substr[j++] = s[i++];
	}
	substr[j] = '\0';
	return (substr);
}
