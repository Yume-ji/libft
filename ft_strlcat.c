/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:25:03 by chachait          #+#    #+#             */
/*   Updated: 2025/08/26 17:30:26 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	size_t	d_len;

	i = 0;
	j = 0;
	if (!dst || !src)
		return (0);
	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	if (size == 0)
		return (s_len);
	if (d_len >= size)
		return (s_len + size);
	while (i < size - 1 && dst[i])
		i++;
	while (i < size - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (d_len + s_len);
}
