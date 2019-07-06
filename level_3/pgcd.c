/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashongwe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 21:16:52 by ashongwe          #+#    #+#             */
/*   Updated: 2019/07/05 21:29:06 by ashongwe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		nb *= -1;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_pgcd(int a, int b)
{
	int		cdn;
	int		i;

	i = 1;
	cdn = 0;
	while (i < a && i < b)
	{
		if (a % i == 0 && b % i == 0)
			cdn = i;
		i++;
	}
	ft_putnbr(cdn);
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_pgcd(atoi(av[1]), atoi(av[2]));
	//write(1 ,"\n", 1);
	}
	write(1, "\n", 1);
	return (0);
}
