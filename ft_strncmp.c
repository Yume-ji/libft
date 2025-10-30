/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:26:00 by chachait          #+#    #+#             */
/*   Updated: 2025/08/27 11:38:10 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sr1;
	const unsigned char	*sr2;

	i = -1;
	sr1 = (unsigned char *)s1;
	sr2 = (unsigned char *)s2;
	while (++i < n)
	{
		if (sr1[i] != sr2[i])
			return (sr1[i] - sr2[i]);
	}
	return (0);
}
