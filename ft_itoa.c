/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:12:32 by chachait          #+#    #+#             */
/*   Updated: 2025/08/29 14:31:06 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_len(long int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 9)
	{
		count++;
		n /= 10;
	}
	if (n > 0)
		count++;
	return (count);
}

char	*n_zero(void)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * 2);
	res[0] = '0';
	res[1] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	char		*res;
	size_t		i;
	size_t		count;
	long int	new_n;

	if (n == 0)
		return (n_zero());
	new_n = n;
	count = get_len(new_n);
	res = (char *)malloc(sizeof(char) * (count + 1));
	if (!res)
		return (NULL);
	i = -1;
	if (new_n < 0)
		new_n *= -1;
	while (++i < count && new_n > 0)
	{
		res[count - i - 1] = (new_n % 10) + '0';
		new_n /= 10;
	}
	if (i < count)
		res[count - i++ - 1] = '-';
	res[i] = '\0';
	return (res);
}
