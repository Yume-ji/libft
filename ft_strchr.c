/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:57:41 by chachait          #+#    #+#             */
/*   Updated: 2025/08/26 17:48:10 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		new_c;
	const char	*str;

	str = s;
	new_c = c;
	while (*str)
	{
		if (*str == new_c)
			return ((char *)str);
		str++;
	}
	if (*str == new_c)
		return ((char *)str);
	return (NULL);
}
