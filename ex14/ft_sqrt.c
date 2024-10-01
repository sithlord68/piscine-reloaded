/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:54:00 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/30 18:42:32 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	div;

	div = 1;
	while (div < nb / 2)
	{
		if (div * div == nb)
			return (div);
		else
			div++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	value1;
	int	value2;

	(void) argc;
	(void) argv;
	value1 = 1702;
	value2 = 0;
	printf("fact %i = %i should %i\n", value1, ft_sqrt(value1), value2);
	value1 = 214748364;
	value2 = 0;
	printf("fact %i = %i should %i\n", value1, ft_sqrt(value1), value2);
	value1 = 1241293824;
	value2 = 35232;
	printf("fact %i = %i should %i\n", value1, ft_sqrt(value1), value2);
	value1 = 105095649;
	value2 = 0;
	printf("fact %i = %i should %i\n", value1, ft_sqrt(value1), value2);
	value1 = 2178576;
	value2 = 1476;
	printf("fact %i = %i should %i\n", value1, ft_sqrt(value1), value2);
	value1 = 79168645;
	value2 = 0;
	printf("fact %i = %i should %i\n", value1, ft_sqrt(value1), value2);
}
*/