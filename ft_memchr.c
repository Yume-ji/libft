/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:38:32 by chachait          #+#    #+#             */
/*   Updated: 2025/08/27 11:45:03 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		new_c;
	const unsigned char	*sr;

	sr = s;
	new_c = c;
	i = -1;
	while (++i < n)
	{
		if (sr[i] == new_c)
			return ((void *)sr + i);
	}
	return (NULL);
}
