/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashongwe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 17:34:55 by ashongwe          #+#    #+#             */
/*   Updated: 2019/07/01 17:36:28 by ashongwe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	t_list	list;

	list = begin_list;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
