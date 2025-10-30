/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:50:58 by chachait          #+#    #+#             */
/*   Updated: 2025/08/31 13:20:27 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*scs;
	unsigned char		*dst;

	i = -1;
	dst = dest;
	scs = src;
	if (!dest || !src)
		return (NULL);
	while (++i < n && dst <= scs)
		dst[i] = scs[i];
	while (n > 0 && dst > scs)
	{
		dst[n - 1] = scs[n - 1];
		n--;
	}
	return (dst);
}
