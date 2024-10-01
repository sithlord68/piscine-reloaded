/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:54:00 by pjolidon          #+#    #+#             */
/*   Updated: 2024/10/01 10:53:23 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 14)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = nb;
	while (nb > 1)
		result = result * --nb;
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
	value1 = 0;
	value2 = 1;
	printf("fact %i = %i\n", value1, ft_iterative_factorial(value1));
	printf("fact %i = %i\n", value2, ft_iterative_factorial(value2));
	value1 = 2;
	value2 = 12;
	printf("fact %i = %i\n", value1, ft_iterative_factorial(value1));
	printf("fact %i = %i\n", value2, ft_iterative_factorial(value2));
	value1 = 3;
	value2 = 9;
	printf("fact %i = %i\n", value1, ft_iterative_factorial(value1));
	printf("fact %i = %i\n", value2, ft_iterative_factorial(value2));
	value1 = 10;
	value2 = 11;
	printf("fact %i = %i\n", value1, ft_iterative_factorial(value1));
	printf("fact %i = %i\n", value2, ft_iterative_factorial(value2));
	value2 = 72;
	printf("fact %i = %i\n", value2, ft_iterative_factorial(value2));
}
*/