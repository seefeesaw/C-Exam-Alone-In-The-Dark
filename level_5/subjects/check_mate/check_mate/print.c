/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 11:02:50 by exam              #+#    #+#             */
/*   Updated: 2017/02/28 11:36:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	print_fail(void)
{
	write(1, "Fail\n", 5);
}

static void	print_success(void)
{
	write(1, "Success\n", 8);
}

void		final_print(t_m *m)
{
	(m->mate) ? print_success() : print_fail();
}
