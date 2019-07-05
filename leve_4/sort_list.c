/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashongwe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 00:48:50 by ashongwe          #+#    #+#             */
/*   Updated: 2019/06/30 00:57:33 by ashongwe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	swap;
	t_list	*tmp;

	tmp = lst;
	while (lst->next)
	{
		if (((*cmp)(lst->data,lst->next->data))==0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst->lst->next;
	}
	lst= tmp;
	return (lst);
}
