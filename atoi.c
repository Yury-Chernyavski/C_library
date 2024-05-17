/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:53:57 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/14 18:07:40 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	unsigned int	num;
	int				i;
	int				np;

	np = 1;
	i = 0;
	num = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			np = -1;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		num = num * 10 + (nptr[i] - 48);
		i++;
	}
	return ((int)(np * num));
}

/* 
int	main(void)
{
	char	str1[] = "124ab567";
	char	str2[] = "-124ab567";
	char	str3[] = " +--+--+124567";
	char	str4[] = " 124567";

	printf("%d %d\n", atoi(str1), ft_atoi(str1));
	printf("%d %d\n", atoi(str2), ft_atoi(str2));
	printf("%d %d\n", atoi(str3), ft_atoi(str3));
	printf("%d %d\n", atoi(str4), ft_atoi(str4));
}
 */
