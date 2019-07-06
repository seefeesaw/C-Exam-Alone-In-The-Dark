/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashongwe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 17:39:51 by ashongwe          #+#    #+#             */
/*   Updated: 2019/07/01 18:14:31 by ashongwe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_abs(int x)
{
	if (x < 0)
		return (x *  -1);
	return (x);
}
int     *ft_rrange(int start, int end)
{
	int		i;
	int		*tab;

	i = 0;
	if (!(tab = (int*)malloc(sizeof(int*) * (ft_abs(end - start) + 1))))
		return (NULL);
	if (end > start)
	{
		while (end >= start)
		tab[i++] = end--;
	}
	else if (end < start)
	{
		while (end <= start)
		tab[i++] = end++;
	}
	tab[i] = '\0';
	return (tab);
}
int		main ()
{
	int a;
	int *b;

	b = ft_rrange(0,-3);
	printf("%d %d %d %d %d %d",b[0],b[1],b[2],b[3],b[4],b[5]);
	/*for (a = 0; b[a] != '\0'; a++)
		printf("%d ",b[a]);*/
	return(0);
}
