/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashongwe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 17:55:37 by ashongwe          #+#    #+#             */
/*   Updated: 2019/07/19 17:55:42 by ashongwe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cycle_detector(const t_list *lst)
{
	t_list		*slow;
	t_list		*fast;

	slow = (t_list *)lst;
	fast = (t_list *)lst->next;
	while (fast && fast->next)
	{
		if (fast == slow)
			return (1);
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
