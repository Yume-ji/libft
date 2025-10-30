/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 13:03:25 by chachait          #+#    #+#             */
/*   Updated: 2025/08/27 13:31:55 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t		i;
	int			temp;
	int			res;
	const char	*str;

	i = 0;
	temp = 1;
	res = 0;
	str = nptr;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			temp *= -1;
		i++;
	}
	i -= 1;
	while (str[++i] && (ft_isdigit(str[i]) != 0))
		res = (res * 10) + (str[i] - '0');
	return (res * temp);
}
