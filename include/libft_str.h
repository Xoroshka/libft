/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:02:20 by clovella          #+#    #+#             */
/*   Updated: 2022/04/28 09:25:15 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_H
# define LIBFT_STR_H
# include <stddef.h>
# include "libft_types.h"

t_str	ft_str_new(void);
t_bool	ft_str_push_cstr(t_str *str, char *cstr, size_t size);
t_bool	ft_str_push_str(t_str *to, t_str from);
t_res	ft_str_push(t_str *str, char c);
t_bool	ft_str_shrink_to_fit(t_str *str);
char	*ft_str2cstr(t_str str);
t_res	ft_str_push_i32(t_str *str, t_i32 n);
t_res	ft_str_push_i64(t_str *str, t_i64 n);
#endif