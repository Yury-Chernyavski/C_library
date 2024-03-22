/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:33:07 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/20 15:47:46 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fn_check_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && fn_check_char(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && fn_check_char(s1[end - 1], set))
		end--;
	new_str = (char *)malloc((end - start + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1 + start, end - start + 1);
	return (new_str);
}
