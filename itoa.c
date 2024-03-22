/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 22:26:43 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/21 22:40:00 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n);

char	*ft_itoa(int n)
{
	char	*new_str;
	int		len;
	int		i;

	len = num_len(n);
	i = len - 1;
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		new_str[0] = 45;
	}
	if (n == 0)
		new_str[0] = n + 48;
	while (n != 0)
	{
		new_str[i] = ((n % 10) + 48);
		n /= 10;
		i--;
	}
	new_str[len] = '\0';
	return (new_str);
}

static int	num_len(int num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		num = -num;
		count++;
	}
	if (num == 0)
		count++;
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}


int	main(void)
{
	printf("%s", ft_itoa(-2147483648LL));
	return (0);
}
