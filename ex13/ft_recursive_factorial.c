/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:54:00 by pjolidon          #+#    #+#             */
/*   Updated: 2024/10/01 10:53:22 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 14)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = nb;
	result *= ft_recursive_factorial(nb - 1);
	if (result < 0)
		result = 0;
	return (result);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	value1;
	int	value2;

	(void) argc;
	(void) argv;
	value1 = 4;
	value2 = 7;
	printf("fact %i = %i\n", value1, ft_recursive_factorial(value1));
	printf("fact %i = %i\n", value2, ft_recursive_factorial(value2));
	value1 = -4;
	value2 = -7;
	printf("fact %i = %i\n", value1, ft_recursive_factorial(value1));
	printf("fact %i = %i\n", value2, ft_recursive_factorial(value2));
}
*/