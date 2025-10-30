/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:00:13 by chachait          #+#    #+#             */
/*   Updated: 2025/08/26 15:40:29 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*scs;
	unsigned char		*dst;

	i = -1;
	scs = src;
	dst = dest;
	if (!dest || !src)
		return (dst);
	while (++i < n)
		dst[i] = scs[i];
	return (dst);
}
