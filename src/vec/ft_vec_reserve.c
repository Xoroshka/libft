/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_reserve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:41 by clovella          #+#    #+#             */
/*   Updated: 2022/10/06 17:44:06 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"
#include "libft_vec.h"
#include "libft_std.h"

t_res	ft_vec_reserve(t_vec *vec, t_u64 additional)
{
	if (additional <= vec->cap - vec->len)
		return (ok);
	return (ft_vec_reserve_exact(vec, ft_umax(vec->cap >> 1, additional)));
}
