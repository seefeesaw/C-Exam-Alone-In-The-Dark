/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashongwe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 05:18:56 by ashongwe          #+#    #+#             */
/*   Updated: 2019/06/29 20:25:40 by ashongwe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
	{
		printf("1");
		return ;
	}
	while (nb >= i)
	{
		if (nb % i == 0)
		{
			printf("%d",i);
			if (nb != i)
			{
				printf("%c",'*');
				nb /= i;
				i--;
			}
		}
		i++;
	}
}
int		main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
