/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:58:53 by clovella          #+#    #+#             */
/*   Updated: 2022/02/13 16:04:02 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft_std.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s && fd)
		write(fd, s, ft_strlen(s));
}