/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 14:52:09 by chachait          #+#    #+#             */
/*   Updated: 2025/08/29 14:59:30 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	new_n;
	char		*n_list;

	new_n = n;
	n_list = "0123456789";
	if (new_n < 0)
	{
		write(fd, "-", sizeof(char));
		new_n *= -1;
	}
	if (new_n > 9)
	{
		ft_putnbr_fd(new_n / 10, fd);
		write(fd, &n_list[new_n % 10], sizeof(char));
	}
	else if (new_n < 10)
		write(fd, &n_list[new_n], sizeof(char));
}
