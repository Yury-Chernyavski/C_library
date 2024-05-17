/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 22:26:43 by ycharnia          #+#    #+#             */
/*   Updated: 2024/04/19 18:12:22 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long n);
static long	check_num(long n, char *str);

char	*ft_itoa(int n)
{
	char	*new_str;
	int		len;
	int		i;
	long	num;

	len = num_len(n);
	i = len - 1;
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	num = check_num(n, new_str);
	while (num != 0)
	{
		new_str[i] = ((num % 10) + 48);
		num /= 10;
		i--;
	}
	new_str[len] = '\0';
	return (new_str);
}

static int	num_len(long num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		num *= -1;
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

static long	check_num(long num, char *str)
{
	if (num < 0)
	{
		num = -num;
		str[0] = 45;
	}
	if (num == 0)
		str[0] = num + 48;
	return (num);
}
