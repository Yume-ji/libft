/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:45:17 by chachait          #+#    #+#             */
/*   Updated: 2025/08/27 11:50:32 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sr1;
	const unsigned char	*sr2;

	sr1 = s1;
	sr2 = s2;
	i = -1;
	while (++i < n)
	{
		if (sr1[i] != sr2[i])
			return (sr1[i] - sr2[i]);
	}
	return (0);
}
