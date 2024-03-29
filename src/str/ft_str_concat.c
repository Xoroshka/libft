/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_concat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:37 by clovella          #+#    #+#             */
/*   Updated: 2022/07/24 15:55:41 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"
#include "libft_std.h"

t_res	ft_str_concat(t_str *str, const char *cstr, t_u64 size)
{
	if (ft_vec_reserve(str, size)
		&& ft_memcpy(str->data + str->len, cstr, size))
	{
		str->len += size;
		return (ok);
	}
	return (err);
}
