/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharnia <ycharnia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:23:33 by ycharnia          #+#    #+#             */
/*   Updated: 2024/03/15 21:42:51 by ycharnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (!ptr || (nmemb * size == 2147483647))
		return (NULL);
	ft_bzero(ptr, nmemb);
	return (ptr);
}

/* int	main(void)
{
	char	*num;
	char	*num2;

	num = ft_calloc(2, sizeof(char));
	num2 = calloc(2, sizeof(char));
	printf("%s\n", num);
	printf("%s\n", num2);
	free(num);
	free(num2);
	num = NULL;
	num2 = NULL;
	return (0);
}
 */