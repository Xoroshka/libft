/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:57:27 by clovella          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:50 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_std.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	abs;
	long long int	mod;

	if (!fd)
		return ;
	if (n < 0)
	{
		n++;
		abs = -n;
		abs++;
		ft_putchar_fd('-', fd);
	}
	else
		abs = n;
	mod = 1;
	while (abs / mod > 9)
		mod *= 10;
	while (mod)
	{
		ft_putchar_fd((abs / mod) + '0', fd);
		abs %= mod;
		mod /= 10;
	}
}
