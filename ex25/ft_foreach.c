/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:53:00 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/16 20:46:00 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

/*
#include <unistd.h>
void	ft_putnbr(int valeur)
{
	int		sign;
	char	p;

	sign = 1;
	if (valeur < 0)
	{
		write(1, "-", 1);
		sign = -1;
	}
	if (valeur >= 10 || valeur <= -10)
	{
		ft_putnbr(sign * (valeur / 10));
		ft_putnbr(sign * (valeur % 10));
	}
	else
	{
		p = sign * valeur + '0';
		write(1, &p, 1);
	}
}
int	main(int argc, char **argv)
{
	int	tab[9] = { 14, 53, 937, -1375, -42, 3675, 36, 301329, -308246 };

	(void) argc;
	(void) argv;
	
	ft_foreach(tab, 9, &ft_putnbr);
	return (0);
}
*/