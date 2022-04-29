/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_shrink_to_fit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:46:13 by clovella          #+#    #+#             */
/*   Updated: 2022/04/28 09:35:03 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_std.h"
#include "libft_types.h"

t_res	ft_str_shrink_to_fit(t_str *str)
{
	t_u8	*new_data;

	if (str->cap == str->len)
		return (ok);
	new_data = ft_memchsize(str->data, str->cap, str->len);
	if (new_data)
	{
		str->data = new_data;
		str->cap = str->len;
		return (ok);
	}
	else if (str->err_handl == true)
		str->on_err(str->on_err_ctx);
	return (err);
}
