/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:04:53 by clovella          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:50 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_std.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	cc = c;
	const char	*ss;

	ss = s + ft_strlen(s) - 1;
	if (cc == '\0')
		return ((char *) ss + 1);
	while (*ss != cc && ss > s)
		ss--;
	if (*ss != cc)
		return (0);
	return ((char *) ss);
}
