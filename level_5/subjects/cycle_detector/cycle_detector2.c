/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashongwe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 17:56:34 by ashongwe          #+#    #+#             */
/*   Updated: 2019/07/19 17:56:37 by ashongwe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

int		cycle_detector(const t_list *list)
{
	const t_list *p;
	const t_list *q;

	p = list;
	q = list;
	while (p && q && q->next)
	{
		p = p->next;
		q = q->next->next;
		if (p == q)
			return (1);
	}
	return (0);
}
