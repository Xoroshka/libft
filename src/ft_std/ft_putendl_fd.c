/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:56:58 by clovella          #+#    #+#             */
/*   Updated: 2022/02/13 16:04:02 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_std.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd && s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}