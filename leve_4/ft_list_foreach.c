/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashongwe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 20:31:45 by ashongwe          #+#    #+#             */
/*   Updated: 2019/06/29 20:35:09 by ashongwe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*ptr;
	ptr = begin_list;
	while (ptr)
	{
		(*f)(list_ptr->data);
		ptr = ptr->next;
	}
}
